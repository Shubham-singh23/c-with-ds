#include <iostream.h>
#include <conio.h>
class complex
{
 float real, imag;
 public:
 void getcomplex();
 void putcomplex();
 void operator*(complex);
};
void complex::operator*(complex o)
{
 real = real * o.real - imag * o.imag;
 imag = real * o.imag + imag * o.real;
}
void complex::putcomplex()
{
 if (imag >= 0)
  cout << real << " + " << imag << "i";
 else
  cout << real << " - " << -imag << "i";
}
void complex::getcomplex()
{
 cout << "\n Enter value for real and imaginary number: ";
 cin >> real >> imag;
}
int main()
{
 clrscr();
 complex obj1, obj2, obj3;
 cout << "\n Enter First Complex Number: ";
 obj1.getcomplex();
 cout << "\n Enter Second Complex Number: ";
 obj2.getcomplex();
 obj1 * obj2;
 cout << "\n After Multiplication: ";
 obj1.putcomplex();
 getch();
 return 0;
}