#include <iostream.h>
#include <conio.h>
class cl
{
 private:
  float f;
 public:
  void get(int);
  float valf();
  void getf(float);
};
void cl::getf(float v)
{
 f = v;
}
float cl::valf()
{
 return f;
}
void cl::get(int i)
{
 cout << "\n Enter value of f for obj[" << i << "]";
 cin >> f;
}
int main()
{
 clrscr();
 cl obj[5];
 for(int i = 0; i < 5; i++)
  obj[i].get(i);
 for(i = 0; i < 4; i++)
  for(int j = i + 1; j < 5; j++)
   if (obj[i].valf() > obj[j].valf())
   {
    float t;
    t = obj[i].valf();
    obj[i].getf(obj[j].valf());
    obj[j].getf(t);
   }
 cout << "\n After Sorting: \n";
 for(i = 0; i < 5; i++)
  cout << obj[i].valf() << "\t";
 getch();
 return 0;
}