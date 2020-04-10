#include <iostream.h>
#include <conio.h>
class mins
{
 float x;
 public:
  mins();
  void operator-();
  void disp();
};
mins::mins()
{
 x = 7;
}
void mins::disp()
{
 cout << "\n Value of x: " << x;
}
void mins::operator-()
{
 x = -x;
}
int main()
{
 clrscr();
 mins obj;
 obj.disp();
 -obj;
 obj.disp();
 getch();
 return 0;
}