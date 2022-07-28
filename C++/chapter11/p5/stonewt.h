#ifndef __STONEWT_H1__
#define __STONEWT_H1__

class Stonewt
{
  private:
    enum {Lbs_per_stn=14};
    // static const int Lbs_per_stn=14;
    int stone_;
    double pds_left_;
    double pounds_;
  public:
    //explicit Stonewt(double lbs);
    Stonewt(double lbs);
    Stonewt(int stn,double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    explicit operator int() const;
    explicit operator double() const;
};
#endif
