#ifndef __TV_H__
#define __TV_H__

class Tv
{
  private:
    int state_;
    int volume_;
    int max_channel_;
    int channel_;
    int mode_;
    int input_;
  public:
    friend class Remote;
    enum {OFF,ON};
    enum {MinVal,MaxVal=20};
    enum {Antenna,Cable};
    enum {TV,DVD};

    Tv(int state=OFF,int max_channel=125):state_(state),volume_(5),\
        max_channel_(max_channel),channel_(2),mode_(Cable),input_(TV){}
    void onoff(){state_=(state_==ON)?OFF:ON;}
    bool ison(){return state_==ON;}
    bool volup();
    bool voldown();
    bool chanup();
    bool chandown();
    void set_mode(){mode_=(mode_==Antenna)?Cable:Antenna;}
    void set_input(){input_=(input_==TV)?DVD:TV;}
    void settings() const;
};

class Remote
{
  private:
    int mode_;
  public:
    Remote(int m=Tv::TV):mode_(m){}
    void onoff(Tv &t){return t.onoff();}
    bool volup(Tv &t){return t.volup();}
    bool voldown(Tv &t){return t.voldown();}
    bool chanup(Tv &t){return t.chanup();}
    bool chandown(Tv &t){return t.chandown();}
    void set_chan(Tv &t,int c){t.channel_=c;} 
    void set_mode(Tv &t){t.set_mode();}
    void set_input(Tv &t){t.set_input();}
};
#endif
