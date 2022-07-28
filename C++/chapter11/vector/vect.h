#ifndef __VECT_H__
#define __VECT_H__
#include <iostream>
#include <ostream>

const double PI=3.1415926535;

namespace VECTOR
{
  class Vector
  {
    public:
      enum Mode {RECT,POL};
    private:
      double x_;
      double y_;
      double mag_;
      double ang_;
      Mode mode_;
      void set_x();
      void set_y();
      void set_mag();
      void set_ang();
    public:
      Vector();
      Vector(double n1,double n2,Mode mode=RECT);
      void reset(double n1,double n2,Mode mode=RECT);
      ~Vector();
      double xval(){return x_;}
      double yval(){return y_;}
      double magval(){return mag_;}
      double angval(){return ang_;}
      void rect_mode();
      void pol_mode();

      Vector operator+(const Vector &b) const;
      Vector operator-(const Vector &b) const;
      Vector operator-() const;
      Vector operator*(double n) const;
      friend Vector operator*(double n,const Vector &b);
      friend std::ostream & operator<<(std::ostream &os,const Vector &b);
    };
}
#endif
