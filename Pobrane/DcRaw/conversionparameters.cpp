#include "conversionparameters.h"


int ConversionParameters::getOutputTiff() const
{
    return outputTiff;
}

void ConversionParameters::setOutputTiff(int value)
{
    outputTiff = value;
}

int ConversionParameters::getThumbnailOnly() const
{
    return thumbnailOnly;
}

void ConversionParameters::setThumbnailOnly(int value)
{
    thumbnailOnly = value;
}
int ConversionParameters::getTimestampOnly() const
{
    return timestamp_only;
}
void ConversionParameters::setTimestampOnly(int value)
{
    timestamp_only = value;
}
int ConversionParameters::getUserQual() const
{
    return user_qual;
}
void ConversionParameters::setUserQual(int value)
{
    user_qual = value;
}
int ConversionParameters::getUserFlip() const
{
    return user_flip;
}
void ConversionParameters::setUserFlip(int value)
{
    user_flip = value;
}
int ConversionParameters::getThreshold() const
{
    return threshold;
}
void ConversionParameters::setTreshold(int value)
{
    threshold = value;
}
int ConversionParameters::getBright() const
{
    return bright;
}
void ConversionParameters::setBright(int value)
{
    bright = value;
}
int ConversionParameters::getQuality() const
{
    return quality;
}
void ConversionParameters::setQuality(int value)
{
    quality = value;
}
int ConversionParameters::getHighlight() const
{
    return highlight;
}
void ConversionParameters::setHighlight(int value)
{
    highlight = value;
}
int ConversionParameters::getHalfSize() const
{
    return half_size;
}
void ConversionParameters::setHalfSize(int value)
{
    half_size = value;
}
int ConversionParameters::getFourColorRGB() const
{
    return four_color_rgb;
}
void ConversionParameters::setFourColorRGB(int color)
{
    four_color_rgb = color;
}
int ConversionParameters::getUse_auto_wb() const
{
    return use_auto_wb;
}
void ConversionParameters::setUse_auto_wb(int value)
{
    use_auto_wb = value;
}
int ConversionParameters::getUseCameraWb() const
{
    return use_camera_wb;
}
void ConversionParameters::setUseCameraWb(int value)
{
    use_camera_wb = value;
}
int ConversionParameters::getDocumentMode() const
{
    return document_mode;
}
void ConversionParameters::setDocumentMode(int value)
{
    document_mode = value;
}
int ConversionParameters::getNoAutoBright() const
{
    return no_auto_bright;
}
void ConversionParameters::setNoAutoBright(int value)
{
    no_auto_bright = value;
}
ConversionParameters::ConversionParameters()
{

}

ConversionParameters::ConversionParameters(int thumbnailOnly, int outputTiff)
{
    this->thumbnailOnly = thumbnailOnly;
    this->outputTiff = outputTiff;

}

ConversionParameters::~ConversionParameters()
{

}
ConversionParameters ConversionParameters::ICON_CONVERSION_PARAMETERS(1,0);

