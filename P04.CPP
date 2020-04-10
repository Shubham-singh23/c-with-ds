#include<iostream.h>
#include<conio.h>
class cl
{
 private:
  int one, two, five, twenty, fifty;
 public:
  void solution();
};
void cl::solution()
{
 cout << "\n 1 \t 2 \t 5 \t 20 \t 50";
 for(one=0; one<=10; one++)
  for(two=0; two<=10; two++)
   for(five=0; five<=10; five++)
    for(twenty=0; twenty<=5; twenty++)
     for(fifty=0; fifty<=2; fifty++)
      if ((one * 1 + two * 2+ five * 5 + twenty * 20 + fifty * 50 == 100) &&
	  (one + two + five + twenty + fifty == 10))
       cout << "\n " << one << "\t" << two  << "\t" << five  << "\t" << twenty  << "\t" << fifty;
}
int main()
{
  clrscr();
  class cl obj;
  obj.solution();
  getch();
  return 0;
}