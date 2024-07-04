#include <bits/stdc++.h>
using namespace std;

class node
{
public:
   int data;
   node *left, *right;
   node(int data)
   {
      this->data = data;
      this->left = 0;
      this->right = 0;
   }
};

node *level(node *root)
{
   int data;
   cin >> data;
   root = new node(data);

   queue<node *> q;
   q.push(root);
   while (!q.empty())
   {
      int size = q.size();
      while (size)
      {
         node *temp = q.front();
         q.pop();

         cout << "enter data for left of " << temp->data << endl;
         cin >> data;
         if (data != -1)
         {
            temp->left = new node(data);
            q.push(temp->left);
         }
         cout << "enter the data for right of " << temp->data << endl;
         cin >> data;
         if (data != -1)
         {
            temp->right = new node(data);
            q.push(temp->right);
         }
         size--;
      }
   }
   return root;
}
void level_print(node *root)
{
   if (root == nullptr)
      return;

   queue<node *> q;
   q.push(root);
   while (!q.empty())
   {
      int size = q.size();
      while (size)
      {
         node *temp = q.front();
         q.pop();

         cout << temp->data << " ";
         if (temp->left)
            q.push(temp->left);
         if (temp->right)
            q.push(temp->right);
         size--;
      }
      cout << endl;
   }
}
int main()
{
   node *root = 0;
   root = level(root);
   level_print(root);

   return 0;
}