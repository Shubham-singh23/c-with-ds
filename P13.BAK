#include <iostream.h>
#include <conio.h>
class A
{
 friend class B;
 private:
  float f;
 public:
  void initA();
};
void A::initA()
{
 f = 7;
}
class B
{
 public:
  void putA(A);
};
void B::putA(A o)
{
 cout << "\n Value of f: " << o.f;
}
int main()
{
 clrscr();
 A objA;
 B objB;
 objA.initA();
 objB.putA(objA);
 getch();
 return 0;
}