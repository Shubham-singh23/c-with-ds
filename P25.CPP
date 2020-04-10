#include <iostream.h>
#include <conio.h>
class mins
{
 float x;
 public:
  mins();
  float operator--();
  float operator--(int);
};
mins::mins()
{
 x = 7;
}
float mins::operator--()
{
  cout << "\n Pre";
 x -= 1;
 return x;
}
float mins::operator--(int i)
{
  cout << "\n Post";
 x -= 2;
 return x;
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