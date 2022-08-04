#include "tvfm.h"
#include <iostream>

bool Tv::volup()
{
  if(volume_<MaxVal)
  {
    volume_++;
    return true;
  }
  return false;
}

bool Tv::voldown()
{
  if(volume_>MinVal)
  {
    volume_--;
    return true;
  }
  return false;
}

bool Tv::chanup()
{
  if(channel_<max_channel_)
  {
    channel_++;
    return true;
  }
  return false;
}

bool Tv::chandown()
{
  if(channel_>1)
  {
    channel_--;
    return true;
  }
  return false;
}

void Tv::settings() const
{
  using std::cout;
  using std::endl;
  cout<<"TV is "<<(state_==ON?"ON":"OFF")<<endl;
  if(state_==ON)
  {
    cout<<"Channel setting: "<<channel_<<endl;
    cout<<"Volume setting: "<<volume_<<endl;
    cout<<"Mode = "
      <<(mode_==Antenna?"Antenna":"Cable")<<endl;
    cout<<"Input = "
      <<(input_==TV?"TV":"DVD")<<endl;
  }
}
