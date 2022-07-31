#ifndef __TABTENN0_H__
#define __TABTENN0_H__

#include <string>

using std::string;

class TableTennisPlayer
{
  private:
    string firstname_;
    string lastname_;
    bool hasTable_;
  public:
    TableTennisPlayer(const string &fn="none",const string &ln="none",bool\
        hasTable=false);
    void Name() const;
    bool HasTable(){return hasTable_;}
    void ResetTable(bool v){hasTable_=v;}
};
#endif
