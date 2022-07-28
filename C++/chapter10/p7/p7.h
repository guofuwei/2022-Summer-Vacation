#ifndef __P7_H__
#define __P7_H__
#include <string>

class Plorg
{
  private:
    std::string name_;
    int CI_;
  public:
    Plorg();
    Plorg(const std::string &name,int CI);
    void SetName(const std::string &name);
    void SetCi(int CI);
    void ShowInfo() const;
};
#endif
