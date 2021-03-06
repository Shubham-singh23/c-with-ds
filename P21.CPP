#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
class llist
{
 private:
  float ele;
  llist *nxt;
 public:
  void createLList(llist *);
  void displayLList(llist *);
  void insertAtLocation(llist *);
};
llist *root=NULL;

void llist::insertAtLocation(llist *curr)
{
 llist *node, *prv;
 float f;
 int loc, cnt=0;
 while(curr != NULL)
 {
  cnt++;
  curr = curr->nxt;
 }
 curr = root;
 cout << "\n Enter Location at which Node will be Added: ";
 do
 {
  cin >> loc;
 }while(loc <= 0 || loc > cnt+1);
 node = new llist;
 cout << "\n Enter Value: ";
 cin >> f;
 node->ele = f;
 if (loc == 1)
 {
  node->nxt = curr;
  root = node;
 }
 else
 {
  int i = 1;
  prv = curr;
  while (i < loc - 1)
  {
   prv = prv->nxt;
   i++;
  }
  node->nxt = prv->nxt;
  prv->nxt = node;
 }
}


void llist::displayLList(llist *curr)
{
 cout << "\n Linked List: \n";
 while(curr != NULL)
 {
  cout << curr->ele << "\t";
  curr = curr->nxt;
 }
}
void llist::createLList(llist *curr)
{
 llist *node;
 char op;
 float f;
 do
 {
  node = new llist;
  if (node == NULL)
   exit(0);
  cout << "\n Enter Element: ";
  cin >> f;
  if (root == NULL)
   root = node;
  else
   curr->nxt = node;
  curr = node;
  curr->ele = f;
  curr->nxt = NULL;
  cout << "\n Do you want to Continue: ";
  cin >> op;
 }
 while(op == 'Y' || op == 'y');
}
int main()
{
 clrscr();
 llist obj;
 obj.createLList(root);
 obj.displayLList(root);
 obj.insertAtLocation(root);
 obj.displayLList(root);
 getch();
 return 0;
}

