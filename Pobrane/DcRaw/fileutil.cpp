#include "fileutil.h"

FileUtil::FileUtil()
{

}

FileUtil::~FileUtil()
{

}

bool FileUtil::isInTmp(std::string filePath)
{
    QFileInfo file(QString::fromStdString(filePath));
    return file.exists() && file.isFile();
}

QString FileUtil::saveFile(QWidget* parent)
{
    return appendTiffExtension(QFileDialog::getSaveFileName(parent,"Save",QDir::currentPath(),"Tiff images (*.tiff)"));
}

std::string FileUtil::moveToTmp(std::string filePath, QString applicationDirPath)
{
    std::string newPath = applicationDirPath.toStdString() +  "/tmp/" + filePath.substr(filePath.find_last_of("/"));
    QFile::rename(QString::fromStdString(filePath),QString::fromStdString(newPath));
    return newPath;
}

std::string FileUtil::changeExtension(std::string filePath, std::string newExtension)
{
    return filePath.substr(0,filePath.find_last_of(".")) + newExtension;
}

void FileUtil::cleanUpTmp(QString applicationDirPath,bool all)
{
    QDir dir(applicationDirPath + "/tmp/");
    QString ext = all ? "*.*" : "*.tiff";
    dir.setNameFilters(QStringList(ext));
    dir.setFilter(QDir::Files);
    foreach (QString file, dir.entryList()) {
        dir.remove(file);
    }
}
QString FileUtil::appendTiffExtension(QString path)
{
    if(!path.endsWith(".tiff"))
        path  += ".tiff";
    return path;
}
