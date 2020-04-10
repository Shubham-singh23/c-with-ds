#include <iostream.h>
#include <conio.h>
class cbv
{
 public:
  void swap(float, float);
};
void cbv::swap(float x, float y)
{
 float t;
 t = x;
 x = y;
 y = t;
}
int main()
{
 clrscr();
 float a = 2, b = 3;
 cbv ocbv;
 ocbv.swap(a, b);
 cout << "\n a = " << a;
 cout << "\n b = " << b;
 getch();
 return 0;
}