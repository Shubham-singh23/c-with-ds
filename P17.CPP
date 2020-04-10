#include <iostream.h>
#include <conio.h>
class cl
{
 private:
  float f;
  static int sf;
 public:
  cl();
  void disp();
};
int cl::sf = 0;
void cl::disp()
{
 cout << "\n Value of f: " << f;
 cout << "\n Value of Static f: " << sf;
}
cl::cl()
{
 cout << "\n Enter value for f: ";
 cin >> f;
 sf++;
}

int main()
{
 clrscr();
 cl obj1;
 cout << "\n\n Value from Obj1:";
 obj1.disp();
 cl obj2;
 cout << "\n\n Value from Obj2:";
 obj2.disp();
 getch();
 return 0;
}