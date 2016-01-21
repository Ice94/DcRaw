#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDirModel>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QLabel>
#include "rawconverter.h"
#include "fileutil.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_treeView_clicked(const QModelIndex &index);

    void on_listWidget_clicked(const QModelIndex &index);

    void on_saveButton_clicked();

    void on_zoomInButton_clicked();

    void on_zoomOutButton_clicked();

    void on_convertButton_clicked();

private:
    Ui::MainWindow *ui;
    QString applicationDirPath;
    void changeDirectory(QString path);
    void displayImage(QString imagePath);
    std::vector<std::string> images;
    std::vector<std::string> convertedImages;
    std::string currentImg;
    std::string currentConvertedImg;
    QString currentPath;
    QLabel* imageLabel;
    void resizeImage(double factor);
    QDirModel* dirModel;
    double scaleFactor = 1.0;

};

#endif // MAINWINDOW_H
