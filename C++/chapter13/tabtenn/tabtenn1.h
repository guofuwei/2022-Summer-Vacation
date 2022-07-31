#ifndef __TABTENN1_H__
#define __TABTENN1_H__

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


class RatedPlayer : public TableTennisPlayer
{
  private:
    unsigned int rating_;
  public:
    RatedPlayer(unsigned int r=0,const string &fn="none",const\
        string &ln="none",bool ht=false);
    RatedPlayer(unsigned int r,const TableTennisPlayer & tp);
    unsigned int Rating() const {return rating_;}
    void ResetRating(unsigned int r){rating_=r;}
};
#endif
