#include <iostream.h>
#include <conio.h>
class A
{
  friend void putA(A);
 private:
  float f;
 public:
  void initA();
};
void putA(A o)
{
 cout << "\n Value of f: " << o.f;
}
void A::initA()
{
 f = 7;
}
int main()
{
 clrscr();
 A objA;
 objA.initA();
 putA(objA);
 getch();
 return 0;
}