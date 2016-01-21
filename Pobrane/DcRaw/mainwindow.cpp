#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QDebug>
#include <QFileInfo>
#include <QFileInfoList>
#include <QStringList>
#include <QFileSystemModel>
#include <QModelIndex>
#include <QGraphicsView>
#include <QImage>
#include <QFile>
#include <QPoint>
#include <QPalette>
#include <QScrollArea>
#include <QSizePolicy>
#include <QScrollBar>
#include "rawconverter.h"
#include "conversionparameters.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(80,80));
    ui->listWidget->setFlow(QListWidget::LeftToRight);
    ui->listWidget->setWrapping(false);

    dirModel = new QDirModel();
    dirModel->setFilter(QDir::Dirs | QDir::NoDotAndDotDot);

    ui->treeView->setModel(dirModel);

    imageLabel = new QLabel();
    imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    imageLabel->setScaledContents(true);

    ui->scrollArea->setBackgroundRole(QPalette::Dark);
    ui->scrollArea->setWidgetResizable(false);
    ui->scrollArea->setWidget(imageLabel);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    applicationDirPath = qApp->applicationDirPath();
    QDir dir;
    dir.mkdir(applicationDirPath + "/tmp");

}



MainWindow::~MainWindow()
{
    FileUtil::cleanUpTmp(applicationDirPath,true);
    delete ui;
}

void MainWindow::changeDirectory(QString path)
{
    if(path == currentPath)
        return;

    ui->listWidget->clear();
    images.clear();
    QDir dir;
    dir.setPath(path);
    QFileInfoList fileInfoList = dir.entryInfoList(QStringList(RAWConverter::RAW_FORMATS));

    for(int i = 0; i < fileInfoList.size(); i++) {
            std::string fileName = fileInfoList.at(i).fileName().toStdString();
            std::string fileDir = fileInfoList.at(i).dir().absolutePath().toStdString();
            std::string rawFileName = fileName.substr(0,fileName.find_last_of("."));
            std::string convertedFileName = rawFileName + ".thumb.jpg";
            std::string convertedFilePath = fileDir + "/" + convertedFileName;
            std::string newConvertedFilePath = applicationDirPath.toStdString() + "/tmp/" + convertedFileName;
            if(!FileUtil::isInTmp(newConvertedFilePath)) {
                RAWConverter::convertRAW(fileDir + "/" + fileName,ConversionParameters::ICON_CONVERSION_PARAMETERS);
                FileUtil::moveToTmp(convertedFilePath,applicationDirPath);
            }
            ui->listWidget->addItem(new QListWidgetItem(QIcon(QString::fromStdString(newConvertedFilePath)),QString::fromStdString(fileName)));
            images.push_back(fileDir + "/" + fileName);
            convertedImages.push_back(newConvertedFilePath);
    }
    currentPath = path;
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    if(index.isValid()) {
        QString path =  dirModel->fileInfo(index).absoluteFilePath();
        changeDirectory(path);
    }
}


void MainWindow::displayImage(QString imagePath)
{
    if(!imagePath.isNull() && !imagePath.isEmpty()) {
        imageLabel->setPixmap(QPixmap(imagePath));
        imageLabel->resize(imageLabel->pixmap()->size());
    }
}

void MainWindow::resizeImage(double factor)
{
    if(imageLabel->pixmap()) {
        scaleFactor *= factor;
        imageLabel->resize(scaleFactor * imageLabel->pixmap()->size());
    }
}

void MainWindow::on_listWidget_clicked(const QModelIndex &index)
{
    currentImg = images[index.row()];
    scaleFactor = 1.0;
}


void MainWindow::on_saveButton_clicked()
{
     if(!currentConvertedImg.empty()) {
        QFile::copy(QString::fromStdString(currentConvertedImg),FileUtil::saveFile(this));
     }
}

void MainWindow::on_zoomInButton_clicked()
{
    resizeImage(1.2);
}

void MainWindow::on_zoomOutButton_clicked()
{
    resizeImage(0.8);
}
ConversionParameters getConversionParameters()
{
    ConversionParameters conversionParameters;
    conversionParameters.setOutputTiff(1);
    conversionParameters.setThumbnailOnly(0);
    /* BRATEK
     * tutaj musisz w tym obiekcie wysetowac odpowiednie pola
     * wartosciami z kontrolek w gui ktore odpowiadaja
     * danym parametrom
     * dwa powyzsze zawsze maja zostac takie jakie dalem
     * ta funkcja jest wywolywana przy kliku Convert i przekazuje ten obiekt
     * do funkcji konwertujacej RAWConverter::convertRAW(..)
     */
    return conversionParameters;
}

void MainWindow::on_convertButton_clicked()
{
    if(!currentImg.empty()) {
        FileUtil::cleanUpTmp(applicationDirPath,false);
        RAWConverter::convertRAW(currentImg,getConversionParameters());
        currentConvertedImg = FileUtil::moveToTmp(FileUtil::changeExtension(currentImg,".tiff"),applicationDirPath);
        displayImage(QString::fromStdString(currentConvertedImg));
    }
}
