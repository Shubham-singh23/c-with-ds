#include <iostream.h>
#include <conio.h>
class mins
{
 float x;
 public:
  mins();
  void disp();
  friend void operator-(mins &);
};
mins::mins()
{
 x = 7;
}
void mins::disp()
{
 cout << "\n Value of x: " << x;
}
void operator-(mins & o)
{
 o.x = -o.x;
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