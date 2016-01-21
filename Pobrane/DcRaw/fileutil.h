#ifndef FILEUTIL_H
#define FILEUTIL_H
#include <QFileInfo>
#include <QFileDialog>
#include <QDir>
#include <QDebug>
#include <QString>

class FileUtil
{
private:
    static QString appendTiffExtension(QString path);
public:
    FileUtil();
    ~FileUtil();
    static bool isInTmp(std::string filePath);
    static QString saveFile(QWidget* parent);
    static std::string moveToTmp(std::string filePath,QString applicationDirPath);
    static std::string changeExtension(std::string filePath,std::string newExtension);
    static void cleanUpTmp(QString applicationDirPath,bool all);
};

#endif // FILEUTIL_H
