#ifndef __DMA_H__
#define __DMA_H__
#include <iostream>

class AllBase
{
  private:
    char* label_;
    int rating_;
  public:
    AllBase(const char* label="null",int rating=-1);
    AllBase(const AllBase &all_base);
    AllBase& operator=(const AllBase &all_base);
    virtual ~AllBase()=0;
    friend std::ostream& operator<<(std::ostream &os,const AllBase &all_base);
};

class baseDMA:public AllBase
{
  public:
    baseDMA(const char* label="null",int rating=-1):AllBase(label,rating){}
    //baseDMA(const baseDMA &all_base);
    //baseDMA& operator=(const baseDMA &all_base);
    //virtual ~baseDMA();
    friend std::ostream& operator<<(std::ostream &os,const baseDMA &bdma);
};

class lacksDMA:public AllBase
{
  private:
    enum {COL_NUM=40};
    char color_[COL_NUM];
  public:
    lacksDMA(const char* label="null",int rating=-1,const char* color="null");
    lacksDMA(const AllBase &all_base,const char* color="null");
    //lacksDMA(const lacksDMA &all_base);
    //lacksDMA& operator=(const lacksDMA &all_base);
    //virtual ~lacksDMA();
    friend std::ostream& operator<<(std::ostream &os,const lacksDMA &ldma);
};

class hasDMA:public AllBase
{
  private:
    char* style_; 
  public:
    hasDMA(const char* label="null",int rating=-1,const char* style="null");
    hasDMA(const AllBase &all_base,const char* style="null");
    hasDMA(const hasDMA &hdma);
    hasDMA& operator=(const hasDMA &hdma);
    virtual ~hasDMA();
    friend std::ostream& operator<<(std::ostream &os,const hasDMA &hdma);
};
#endif
