#ifndef RAWCONVERTER_H
#define RAWCONVERTER_H
#include <QString>
#include <QStringList>
#include "conversionparameters.h"
class RAWConverter
{
public:

    static QStringList RAW_FORMATS;
    RAWConverter();
    ~RAWConverter();
    static int convertRAW(std::string filename,ConversionParameters conversionParameters);
};

#endif // RAWCONVERTER_H
