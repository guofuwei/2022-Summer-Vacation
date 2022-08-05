#ifndef __SALES_H__
#define __SALES_H__
#include <stdexcept>
#include <string>

class Sales {
  public:
  enum { MONTHS = 12 };
  class bad_index : public std::logic_error {
private:
    int bi_;

public:
    explicit bad_index(int ix, const std::string& s = "Index error in Sales Object");
    int bi_val() const { return bi_; }
    virtual ~bad_index() throw() { }
  };
  explicit Sales(int year = 0);
  Sales(int year, const double* gr, int n);
  virtual ~Sales(){}
  int Year() { return year_; }
  virtual double operator[](int i) const;
  virtual double& operator[](int i);

  private:
  double gross_[MONTHS];
  int year_;
};

class LabeledSales : public Sales {
  private:
  std::string label_;

  public:
  class nbad_index : public Sales::bad_index {
private:
    std::string lbl_;

public:
    nbad_index(const std::string lable, int ix, const std::string& s = "Index error in LabeledSales object");
    const std::string& label_val() { return lbl_; }
    virtual ~nbad_index() throw() { }
  };

  explicit LabeledSales(const std::string& lb = "none", int year = 0);
  LabeledSales(const std::string& lb, int year, const double* gr, int n);
  virtual ~LabeledSales() { }
  const std::string& Label() { return label_; }
  virtual double operator[](int i) const;
  virtual double& operator[](int i);
};
#endif
