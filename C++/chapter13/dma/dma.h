#ifndef __DMA_H__
#define __DMA_H__
#include <iostream>
#include <ostream>

class baseDMA
{
  private:
    char* label_;
    int rating_;
  public:
    baseDMA(const char* label="none",int rating=0);
    baseDMA(const baseDMA &bdma);
    baseDMA& operator=(const baseDMA &bdma);
    virtual ~baseDMA();
    friend std::ostream& operator<<(std::ostream& os,const baseDMA &bdma);
};


class lacksDMA:public baseDMA
{
  private:
    enum {col_num=40};
    char color_[col_num];
  public:
    lacksDMA(const char* label="null",int rating=0,const char* color="black");
    lacksDMA(const baseDMA &bdma,const char* color);
    //lacksDMA(const lacksDMA &ldma);
    //lacksDMA& operator=(const lacksDMA &ldma);
    //virtual ~lacksDMA();
    friend std::ostream& operator<<(std::ostream &os,const lacksDMA &ldma);
};

class hasDMA:public baseDMA
{
  private:
    char* style_;
  public:
    hasDMA(const char* label="null",int rating=0,const char* style="null");
    hasDMA(const baseDMA &bdma,const char* style);
    hasDMA(const hasDMA &hdma);
    hasDMA& operator=(hasDMA &hdma);
    virtual ~hasDMA();
    friend std::ostream& operator<<(std::ostream &os,const hasDMA &hdma);
};
#endif
