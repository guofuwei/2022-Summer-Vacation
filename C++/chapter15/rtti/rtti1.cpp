#include <cstdlib>
#include <ctime>
#include <iostream>

using std::cout;
using std::endl;

class Grand {
  private:
  int hold;

  public:
  Grand(int h = 0)
      : hold(h)
  {
  }
  virtual void Speak() const { cout << "I am grand class" << endl; }
  virtual int Value() const { return hold; }
};

class Superb : public Grand {
  public:
  Superb(int h = 0)
      : Grand(h)
  {
  }
  virtual void Speak() const { cout << "I am superb class!" << endl; }
  virtual void Say() const
  {
    cout << "I hold the Grand value of " << Value() << endl;
  }
};

class Magnificent : public Superb {
  private:
  char ch;

  public:
  Magnificent(int h = 0, char c = 'A')
      : Superb(h)
      , ch(c)
  {
  }
  virtual void Speak() const { cout << "I am Magnificent class!!!" << endl; }
  virtual void Say() const { cout << "I hold the character " << ch << " and the integer " << Value() << endl; }
};

Grand* GetOne();
int main()
{
  std::srand(time(0));
  Grand* pg;
  Superb* ps;
  for (int i = 0; i < 10; i++) {
    pg = GetOne();
    pg->Speak();
    if (ps = dynamic_cast<Superb*>(pg)) {
      ps->Say();
    }
  }
  return 0;
}

Grand* GetOne()
{
  Grand* p;
  switch (std::rand() % 3) {
  case 0:
    p = new Grand(std::rand() % 100);
    break;
  case 1:
    p = new Superb(std::rand() % 100);
    break;
  case 2:
    //cout<<"bingo"<<endl;
    p = new Magnificent(std::rand() % 100, 'A' + std::rand() % 26);
    break;
  }
  return p;
}
