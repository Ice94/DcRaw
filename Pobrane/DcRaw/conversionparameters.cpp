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
int ConversionParameters::getIdentifyOnly() const
{
    return identify_only;
}
void ConversionParameters::setIdentifyOnly(int value)
{
    identify_only = value;
}
int ConversionParameters::getUserQual() const
{
    return user_qual;
}
void ConversionParameters::setUserQual(int value)
{
    user_qual = value;
}
int ConversionParameters::getUserBlack() const
{
    return user_black;
}
void ConversionParameters::setUserBlack(int value)
{
       user_black = value;
}
int ConversionParameters::getUserSat() const
{
    return user_sat;
}
void ConversionParameters::setUserSat(int value)
{
    user_sat = value;
}
int ConversionParameters::getUserFlip() const
{
    return user_flip;
}
void ConversionParameters::setUserFlip(int value)
{
    user_flip = value;
}
int ConversionParameters::getUseFujiRotate() const
{
    return use_fuji_rotate;
}
void ConversionParameters::setUseFujiRotate(int value)
{
    use_fuji_rotate = value;
}
int ConversionParameters::getWriteToStdout() const
{
    return write_to_stdout;
}
void ConversionParameters::setWriteToStdout(int value)
{
    write_to_stdout = value;
}
int ConversionParameters::getReadFromStdin() const
{
    return read_from_stdin;
}
void ConversionParameters::setReadFromStdin(int value)
{
    read_from_stdin = value;
}
const char * ConversionParameters::getSp() const
{
    return sp;
}
void ConversionParameters::setSp(char * str)
{
    sp = str;
}
const char * ConversionParameters::getBpFile() const
{
    return bpfile;
}
void ConversionParameters::setBpFile(char * str)
{
    bpfile = str;
}
const char * ConversionParameters::getDarkFrame() const
{
    return dark_frame;
}
void ConversionParameters::setDarkFrame(char * str)
{
    dark_frame = str;
}
const char * ConversionParameters::getWriteExt() const
{
    return write_ext;
}
void ConversionParameters::setWriteExt(char * str)
{
    write_ext = str;
}
char ConversionParameters::getOpm() const
{
    return opm;
}
void ConversionParameters::setOpm(char c)
{
    opm = c;
}
char ConversionParameters::getOpt() const
{
    return opt;
}
void ConversionParameters::setOpt(char c)
{
    opt = c;
}
char * ConversionParameters::getOfName() const
{
    return ofname;
}
void ConversionParameters::setOfName(char * str)
{
    ofname = str;
}
char * ConversionParameters::getCp() const
{
    return cp;
}
void ConversionParameters::setCp(char * str)
{
    cp = str;
}/*
struct utimbuf * ConversionParameters::getUt() const
{
    return ut;
}
void ConversionParameters::setUt(struct utimbuf  ut)
{
    this->ut = ut ;
}*/
const char * ConversionParameters::getCamProfile() const
{
    return cam_profile;
}
void ConversionParameters::setCamProfile(const char * str)
{
    cam_profile = str;
}
const char * ConversionParameters::getOutProfile() const
{
    return out_profile;
}
void ConversionParameters::setOutProfile(const char * str)
{
    out_profile = str;
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
int ConversionParameters::getArg() const
{
    return arg;
}
void ConversionParameters::setArg(int value)
{
    arg = value;
}
int ConversionParameters::getStatus() const
{
    return status;
}
void ConversionParameters::setStatus(int value)
{
    status = value;
}
int ConversionParameters::getQuality() const
{
    return quality;
}
void ConversionParameters::setQuality(int value)
{
    quality = value;
}/*
const double * ConversionParameters::getAber() const
{
   return aber;
}
void ConversionParameters::setAber(double  Amber [4])
{
    aber = Amber;
}
double * ConversionParameters::getGamm() const
{
    return gamm;
}
void ConversionParameters::setGamm(double * Gamm)
{
    gamm = Gamm;
}*/
int ConversionParameters::getMedPasses() const
{
    return med_passes;
}
void ConversionParameters::setMedPasses(int value)
{
    med_passes = value;
}
int ConversionParameters::getHighlight() const
{
    return highlight;
}
void ConversionParameters::setHighlight(int value)
{
    highlight = value;
}
unsigned ConversionParameters::getShotSelect() const
{
    return shot_select;
}
void ConversionParameters::setShotSelect(unsigned value)
{
    shot_select = value;
}
unsigned ConversionParameters::getMultiOut() const
{
    return multi_out;
}
void ConversionParameters::setMultiOut(unsigned value)
{
    multi_out = value;
}
int ConversionParameters::getOutputColor() const
{
    return output_color;
}
void ConversionParameters::setOutputColor(int value)
{
    output_color = value;
}
int ConversionParameters::getVerbose() const
{
    return verbose;
}
void ConversionParameters::setVerbose(int value)
{
    verbose = value;
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
/*
unsigned * ConversionParameters::getGreybox() const
{
    return greybox;
}
void ConversionParameters::setGreybox(const unsigned int greybox [])
{
    this->greybox = greybox;
}*/
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
int ConversionParameters::getUseCameraMatrix() const
{
    return use_camera_matrix;
}
void ConversionParameters::setUseCameraMatrix(int value)
{
    use_camera_matrix = value;
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
int ConversionParameters::getOutputBps() const
{
    return output_bps;
}
void ConversionParameters::setOutputBps(int value)
{
    output_bps = value;
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

