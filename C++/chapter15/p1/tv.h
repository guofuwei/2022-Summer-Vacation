#ifndef __TV_H__
#define __TV_H__
#include <iostream>

using std::cout;
using std::endl;

class Tv; // forward declaration

class Remote {
  private:
  int mode_;
  int remote_mode_;

  public:
  enum { OFF,
    ON };
  enum { MinVal,
    MaxVal = 20 };
  enum { Antenna,
    Cable };
  enum { TV,
    DVD };
  enum { NORMAL,
    INTER };
  Remote(int m = TV, int r_m = NORMAL)
      : mode_(m)
      , remote_mode_(r_m)
  {
  }
  friend class Tv;
  void onoff(Tv& t);
  bool volup(Tv& t);
  bool voldown(Tv& t);
  bool chanup(Tv& t);
  bool chandown(Tv& t);
  void set_chan(Tv& t, int c);
  void set_mode(Tv& t);
  void set_input(Tv& t);
  void set_remote_mode();
  void show_remote_mode();
};

class Tv {
  private:
  int state_;
  int volume_;
  int max_channel_;
  int channel_;
  int mode_;
  int input_;

  public:
  friend void Remote::set_chan(Tv& t, int c);
  enum { OFF,
    ON };
  enum { MinVal,
    MaxVal = 20 };
  enum { Antenna,
    Cable };
  enum { TV,
    DVD };

  Tv(int state = OFF, int max_channel = 125)
      : state_(state)
      , volume_(5)
      , max_channel_(max_channel)
      , channel_(2)
      , mode_(Cable)
      , input_(TV)
  {
  }
  void onoff() { state_ = (state_ == ON) ? OFF : ON; }
  bool ison() { return state_ == ON; }
  bool volup();
  bool voldown();
  bool chanup();
  bool chandown();
  void set_mode() { mode_ = (mode_ == Antenna) ? Cable : Antenna; }
  void set_input() { input_ = (input_ == TV) ? DVD : TV; }
  void settings() const;
  bool change_remote_mode(Remote& remote);
};

inline void Remote::onoff(Tv& t) { return t.onoff(); }
inline bool Remote::volup(Tv& t) { return t.volup(); }
inline bool Remote::voldown(Tv& t) { return t.voldown(); }
inline bool Remote::chanup(Tv& t) { return t.chanup(); }
inline bool Remote::chandown(Tv& t) { return t.chandown(); }
inline void Remote::set_chan(Tv& t, int c) { t.channel_ = c; }
inline void Remote::set_mode(Tv& t) { t.set_mode(); }
inline void Remote::set_input(Tv& t) { t.set_input(); }
inline void Remote::set_remote_mode() { remote_mode_ = (remote_mode_ == NORMAL) ? INTER : NORMAL; }
inline void Remote::show_remote_mode() { cout << "Remote mode:" << remote_mode_ << endl; }
inline bool Tv::change_remote_mode(Remote& remote)
{
  if (state_ == OFF) {
    cout << "You shoud turn on the tv to change remote mode" << endl;
    return false;
  }
  //remote.set_remote_mode();
  remote.remote_mode_=(remote.remote_mode_==Remote::NORMAL)?Remote::INTER:Remote::NORMAL; 
  return true;
}
#endif
