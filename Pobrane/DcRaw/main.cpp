#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QLabel>
#include <QDir>
#include <QListView>
#include <QListWidget>
#include <QStringList>
#include <string>
#include <QDebug>
#include <QFileInfoList>
#include <QFileInfo>
#include <QPixmap>
#include <QVBoxLayout>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
