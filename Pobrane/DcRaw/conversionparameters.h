#ifndef CONVERSIONPARAMETERS_H
#define CONVERSIONPARAMETERS_H
#include <climits>

class ConversionParameters
{
private:
      int outputTiff;
      int thumbnailOnly;
      int timestamp_only;
      int user_qual;
      int user_flip;
      float threshold;
      float bright;
      int quality;
      int highlight = 0;
      int half_size = 0;
      int four_color_rgb = 0;
      int use_auto_wb = 0;
      int use_camera_wb=0;
      int document_mode = 0;
      int no_auto_bright = 0;
public:
    static ConversionParameters ICON_CONVERSION_PARAMETERS;

    ConversionParameters();
    ConversionParameters(int thumbnailOnly,int outputTiff);
    ~ConversionParameters();

    int getOutputTiff() const;
    void setOutputTiff(int value);
    int getThumbnailOnly() const;
    void setThumbnailOnly(int value);
    int  getTimestampOnly() const;
    void  setTimestampOnly(int value);
    int  getUserQual() const;
    void  setUserQual(int value);
    int  getUserFlip() const;
    void  setUserFlip(int value);
    int  getThreshold() const;
    void  setTreshold(int value);
    int  getBright() const;
    void  setBright(int value);
    int  getQuality() const;
    void  setQuality(int value);
    int  getHighlight() const;
    void  setHighlight(int value);
    int  getHalfSize() const;
    void  setHalfSize(int value);
    int  getFourColorRGB() const;
    void  setFourColorRGB(int color);
    int  getUse_auto_wb() const;
    void  setUse_auto_wb(int value);
    int  getUseCameraWb() const;
    void  setUseCameraWb(int value);
    int  getDocumentMode() const;
    void  setDocumentMode(int value);
    int  getNoAutoBright() const;
    void  setNoAutoBright(int value);


};

#endif // CONVERSIONPARAMETERS_H
