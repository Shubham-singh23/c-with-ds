#include<iostream.h>
#include<conio.h>
class cl
{
  private:
   int i;
  public:
   void disp();
};
void cl::disp()
{
 cout << "\n Enter value for i: ";
 cin >> i;
 cout << "\n Hello MCA2 let's learn C++";
 cout << "\n Value of i = " << i;
}
int main()
{
 clrscr();
 cl obj;
 obj.disp();
 getch();
 return 0;
}
