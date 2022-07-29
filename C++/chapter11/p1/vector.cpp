#include "vect.h"
#include <iostream>
#include <cmath>
#include <ostream>


namespace VECTOR
{
  using std::cout;
  using std::endl;
  Vector::Vector()
  {
    x_=y_=mag_=ang_=0;
    mode_=RECT;
  }

  Vector::Vector(double n1,double n2,Mode mode)
  {
    mode_=mode;
    if(mode==RECT)
    {
						x_=n1;
						y_=n2;
      set_ang();
      set_mag();
    }
    else if(mode==POL)
    {
      mag_=n1;
      ang_=n2*PI/180;
      set_x();
      set_y();
    }
    else
    {
      cout<<"Your mode is not right!,vector will set to 0."<<endl;
      x_=y_=mag_=ang_=0;
      mode=RECT;
      x_=y_=mag_=ang_=0;
      mode=RECT;
    }
  }

  void Vector::reset(double n1, double n2,Mode mode)
  {
    mode_=mode;
    if(mode==RECT)
    {
      x_=n1;
      y_=n2;
      set_ang();
      set_mag();
    }
    else if(mode==POL)
    {
      mag_=n1;
      ang_=n2*PI/180;
      set_x();
      set_y();
    }
    else
    {
      cout<<"Your mode is not right!,vector will not change."<<endl;
    }
  }

  Vector::~Vector()
  {
    //cout<<"Bye"<<endl;
  }

  void Vector::rect_mode()
  {
    mode_=RECT;
  }

  void Vector::pol_mode()
  {
    mode_=POL;
  }

  void Vector::set_x()
  {
    x_=mag_*std::cos(ang_);
  }

  void Vector::set_y()
  {
    y_=mag_*std::sin(ang_);
  }

  void Vector::set_mag()
  {
    mag_=std::sqrt(x_*x_+y_*y_);
  }

  void Vector::set_ang()
  {
    if(x_==0&&y_==0)
    {
      ang_=0;
    }
    ang_=std::atan2(y_,x_);
  }

  Vector Vector::operator+(const Vector &b) const 
  {
    return Vector(x_+b.x_,y_+b.y_);
  }

  Vector Vector::operator-(const Vector &b) const
  {
    return Vector(x_-b.x_,y_-b.y_);
  }

  Vector Vector::operator-() const
  {
    return Vector(-x_,-y_);
  }

  Vector Vector::operator*(double n) const
  {
    return Vector(x_*n,y_*n);
  }

  Vector operator*(double n,const Vector &b)
  {
    return b*n;
  }

  std::ostream& operator<<(std::ostream &os,const Vector &b)
  {
    if(b.mode_==b.RECT)
    {
      os<<"(x,y) = ("<<b.x_<<","<<b.y_<<")"<<endl;
    }
    else if(b.mode_==b.POL)
    {
      os<<"(distance,angle) = ("<<b.mag_<<","<<b.ang_*180/PI<<")"<<endl;
    }
    else
    {
      os<<"Invalid mode!"<<endl;
    }
    return os;
  }
}

