#include <iostream.h>
#include <conio.h>
class con
{
 private:
  float f;
 public:
  con();
  con(float);
  con(con &);
  ~con();
};
con::~con()
{
 cout << "\n Destructor with value: " << f;
}
con::con(con & o)
{
 f = o.f + 1.8;
 cout << "\n Copy Constructor with value for float: " << f;
}
con::con(float v)
{
 f = v;
 cout << "\n Parameterized Constructor with float value: " << f;
}
con::con()
{
 cout << "\n Default Constructor with float value: " << f;
}
int main()
{
 clrscr();
 con dobj, pobj(7.9), cobj(pobj);
 getch();
 return 0;
}