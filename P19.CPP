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
  void insertNodeAtBeg(llist *);

};
llist *root = NULL;
void insertNodeAtBeg(llist *curr)
{
 llist *node;
 float f;
 node=new llist;
 cout<<"\n Enter elemnt:";
 cin>>f;
 node->ele = f;
 node->nxt=curr;
 root=node;
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
 obj.insertNodeAtBeg(root);
 obj.displayLList(root);
 getch();
 return 0;
}

