#ifndef CONVERSIONPARAMETERS_H
#define CONVERSIONPARAMETERS_H
#include <climits>

class ConversionParameters
{
private:
    int outputTiff;
      int thumbnailOnly;
      int timestamp_only;
      int identify_only;
      int user_qual;
      int user_black;
      int user_sat;
      int user_flip;
      int use_fuji_rotate;
      int write_to_stdout;
      int read_from_stdin;
      const char * sp;
      const char * bpfile = 0;
      const char * dark_frame = 0;
      const char * write_ext;
      char opm;
      char opt;
      char * ofname;
      char * cp;
      //struct utimbuf ut;
      const char *cam_profile=0, *out_profile=0;
      float threshold;
      float bright;
      int arg, status=0, quality, i, c;
      double aber [4], gamm[6]={ 0.45,4.5,0,0,0,0 };
      int med_passes = 0;
      int highlight = 0;
      unsigned shot_select = 0;
      unsigned  multi_out = 0;
      int output_color = 1;
      int verbose = 0;
      int half_size = 0;
      int four_color_rgb = 0;
      const unsigned greybox[4] = { 0, 0, UINT_MAX, UINT_MAX };
      int use_auto_wb = 0;
      int use_camera_wb=0;
      int use_camera_matrix=1;
      int document_mode = 0;
      int no_auto_bright = 0;

      int output_bps = 8;
    /* BRATEK */
    /* Tu dodaj odpowiednie pola odpowiadajace parametrom
     * i gettery settery do nich wiadomo.. */
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
    int  getIdentifyOnly() const;
    void  setIdentifyOnly(int value);
    int  getUserQual() const;
    void  setUserQual(int value);
    int  getUserBlack() const;
    void  setUserBlack(int value);
    int  getUserSat() const;
    void  setUserSat(int value);
    int  getUserFlip() const;
    void  setUserFlip(int value);
    int  getUseFujiRotate() const;
    void  setUseFujiRotate(int value);
    int  getWriteToStdout() const;
    void  setWriteToStdout(int value);
    int  getReadFromStdin() const;
    void  setReadFromStdin(int value);
    const char *  getSp() const;
    void  setSp(char * str);
    const char *  getBpFile() const;
    void  setBpFile(char * str);
    const char *  getDarkFrame() const;
    void  setDarkFrame(char * str);
    const char *  getWriteExt() const;
    void  setWriteExt(char * str);
    char  getOpm() const;
    void  setOpm(char c);
    char  getOpt() const;
    void  setOpt(char c);
    char *  getOfName() const;
    void  setOfName(char * str);
    char *  getCp() const;
    void  setCp(char * str);
    struct utimbuf *  getUt() const;
    void  setUt(struct utimbuf  ut);
    const char *  getCamProfile() const;
    void  setCamProfile(const char * str);
    const char *  getOutProfile() const;
    void  setOutProfile(const char * str);
    int  getThreshold() const;
    void  setTreshold(int value);
    int  getBright() const;
    void  setBright(int value);
    int  getArg() const;
    void  setArg(int value);
    int  getStatus() const;
    void  setStatus(int value);
    int  getQuality() const;
    void  setQuality(int value);
    double *  getAber() const;
    void  setAber(double  Amber [4]);
    double *  getGamm() const;
    void  setGamm(double * Gamm);
    int  getMedPasses() const;
    void  setMedPasses(int value);
    int  getHighlight() const;
    void  setHighlight(int value);
    unsigned  getShotSelect() const;
    void  setShotSelect(unsigned value);
    unsigned  getMultiOut() const;
    void  setMultiOut(unsigned value);
    int  getOutputColor() const;
    void  setOutputColor(int value);
    int  getVerbose() const;
    void  setVerbose(int value);
    int  getHalfSize() const;
    void  setHalfSize(int value);
    int  getFourColorRGB() const;
    void  setFourColorRGB(int color);
    unsigned *  getGreybox() const;
    void  setGreybox(const unsigned int greybox []);
    int  getUse_auto_wb() const;
    void  setUse_auto_wb(int value);
    int  getUseCameraWb() const;
    void  setUseCameraWb(int value);
    int  getUseCameraMatrix() const;
    void  setUseCameraMatrix(int value);
    int  getDocumentMode() const;
    void  setDocumentMode(int value);
    int  getNoAutoBright() const;
    void  setNoAutoBright(int value);
    int  getOutputBps() const;
    void  setOutputBps(int value);

};

#endif // CONVERSIONPARAMETERS_H
