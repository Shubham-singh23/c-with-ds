#include <iostream.h>
#include <conio.h>
class cbr
{
 public:
  void swap(float &, float &);
};
void cbr::swap(float & x, float & y)
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
 cbr ocbr;
 ocbr.swap(a, b);
 cout << "\n a = " << a;
 cout << "\n b = " << b;
 getch();
 return 0;
}