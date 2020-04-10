#include <iostream.h>
#include <conio.h>
class mins
{
 float x;
 public:
  mins();
  friend float operator--(mins);
  friend float operator--(mins, int);
};
mins::mins()
{
 x = 7;
}
float operator--(mins o)
{
 cout << "\n Pre";
 o.x -= 1;
 return o.x;
}
float operator--(mins o, int i)
{
 cout << "\n Post";
 o.x -= 2;
 return o.x;
}
int main()
{
 clrscr();
 mins obj;
 cout << "\n" << obj--;
 cout << "\n" << --obj;
 getch();
 return 0;
}