#include <iostream.h>
#include <conio.h>
#include <process.h>
class bstree
{
 bstree *lft;
 float ele;
 bstree *rht;
 public:
  void Insert(float);
  void PreOrder(bstree *);
  void InOrder(bstree *);
  void PostOrder(bstree *);
  int isEmpty();
};
bstree *root = NULL;
int bstree::isEmpty()
{
 if (root == NULL)
  return 1;
 else
  return 0;
}
void bstree::PreOrder(bstree *curr)
{
 if (curr != NULL)
 {
  cout << curr->ele << "\t";
  PreOrder(curr->lft);
  PreOrder(curr->rht);
 }
}
void bstree::InOrder(bstree *curr)
{
 if (curr != NULL)
 {
  PreOrder(curr->lft);
  cout << curr->ele << "\t";
  PreOrder(curr->rht);
 }
}
void bstree::PostOrder(bstree *curr)
{
 if (curr != NULL)
 {
  PreOrder(curr->lft);
  PreOrder(curr->rht);
  cout << curr->ele << "\t";
 }
}
void bstree::Insert(float f)
{
 bstree *node, *curr = root;
 node = new bstree;
 node->lft = NULL;
 node->ele = f;
 node->rht = NULL;
 if (root == NULL)
 {
  root = node;
 }
 else
 {
  do
  {
   if (node->ele < curr->ele)
   {
    if (curr->lft == NULL)
    {
     curr->lft = node;
     break;
    }
    else
     curr = curr->lft;
   }
   else
   {
    if (curr->rht == NULL)
    {
     curr->rht = node;
     break;
    }
    else
     curr = curr->rht;
   }
  }while(1);
 }

}
int main()
{
 clrscr();
 bstree obj;
 int choice;
 float v;
 do
 {
  cout << "\n 1. Insert: ";
  cout << "\n 2. Pre Order: ";
  cout << "\n 3. In Order: ";
  cout << "\n 4. Post Order: ";
  cout << "\n 6. Exit: ";
  do
   cin >> choice;
  while(choice < 1 || choice > 6);
  switch(choice)
  {
   case 1:
    cout << "\n Enter Element to be Added: ";
    cin >> v;
    obj.Insert(v);
    break;
   case 2:
    if (obj.isEmpty())
     cout << "\n Binary Search Tree is Empty";
    else
     obj.PreOrder(root);
    break;
   case 3:
    if (obj.isEmpty())
     cout << "\n Binary Search Tree is Empty";
    else
     obj.InOrder(root);
    break;
   case 4:
    if (obj.isEmpty())
     cout << "\n Binary Search Tree is Empty";
    else
     obj.PostOrder(root);
    break;
   case 6:
    exit(0);
  }
 }while(1);
 getch();
 return 0;
}