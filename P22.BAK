#include <iostream.h>
#include <conio.h>
#include <process.h>
class stack
{
 private:
  float ele;
  stack *nxt;
 public:
  void Push(float);
  void Display();
  int isEmpty();
  float Pop();
};
stack *top = NULL;
float stack::Pop()
{
 stack *node;
 float f;
 node = top;
 f = node->ele;
 top = top->nxt;
 delete node;
 return f;
}
int stack::isEmpty()
{
 if (top == NULL)
  return 1;
 else
  return 0;
}
void stack::Display()
{
 stack *node;
 node = top;
 while (node != NULL)
 {
  cout << node->ele << "\t";
  node = node->nxt;
 }
}
void stack::Push(float f)
{
 stack *node;
 node = new stack;
 node->nxt = top;
 top = node;
 top->ele = f;
}
int main()
{
 clrscr();
 stack obj;
 int choice;
 float v;
 do
 {
  cout << "\n 1. Push: ";
  cout << "\n 2. Display: ";
  cout << "\n 3. Pop: ";
  cout << "\n 4. Exit: ";
  do
   cin >> choice;
  while(choice < 1 || choice > 4);
  switch(choice)
  {
   case 1:
    cout << "\n Enter Element to be Added: ";
    cin >> v;
    obj.Push(v);
    break;
   case 2:
    if (obj.isEmpty())
     cout << "\n Stack Empty";
    else
     obj.Display();
    break;
   case 3:
    if (obj.isEmpty())
     cout << "\n Stack Empty";
    else
    {
     v = obj.Pop();
     cout << "\n Element Removed is: " << v;
    }
    break;
   case 4:
    exit(0);
  }
 }while(1);
 getch();
 return 0;
}