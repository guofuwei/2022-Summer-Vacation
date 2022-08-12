#include <iostream>
#include <memory>
#include <string>

class Report {
  private:
  std::string str;

  public:
  Report(const std::string& s)
      : str(s)
  {
    std::cout << "Object created!" << std::endl;
  }
  ~Report()
  {
    std::cout<<"Object deleted!"<<std::endl;
  }
  void comment() const{std::cout<<str<<std::endl;}
};


int main()
{
  {
    std::auto_ptr<Report> ps(new Report("use auto ptr"));
    ps->comment();
  }
  {
    std::shared_ptr<Report> ps(new Report("use shared ptr"));
    ps->comment();
  }
  {
    std::unique_ptr<Report> ps(new Report("use unique ptr"));
    ps->comment();
  }
  return 0;
}
