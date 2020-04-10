#include <iostream.h>
#include <conio.h>
class FunOver
{
 private:
 public:
  int add(int, int);
  float add(float, float);
  char* add(char, char);
};
char* FunOver::add(char i, char j)
{
 char *c;
 c[0] = i;
 c[1] = j;
 c[2] = '\0';
 return c;
}
int FunOver::add(int i, int j)
{
 return i + j;
}
float FunOver::add(float i, float j)
{
 return i + j;
}
int main()
{
 clrscr();
 int a, b, c;
 float f1, f2, f3;
 char c1, c2;
 char  *s;
 cout << "\n Enter values for a & b: ";
 cin >> a >> b;
 FunOver obj;
 c = obj.add(a, b);
 cout << "\n After Addition: " << c;
 cout << "\n Enter values for f1 & f2: ";
 cin >> f1 >> f2;
 f3 = obj.add(f1, f2);
 cout << "\n After Addition: " << f3;
 cout << "\n Enter values for c1 & c2: ";
 cin >> c1 >> c2;
 s = obj.add(c1, c2);
 cout << "\n After Addition: " << s;
 getch();
 return 0;
}