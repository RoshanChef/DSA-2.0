#include <bits/stdc++.h>
using namespace std;

class node
{
public:
   int val;
   node *left, *right;
   node()
   {
      this->left = 0;
      this->right = 0;
      this->val = 0;
   }
   node(int val)
   {
      this->left = 0;
      this->right = 0;
      this->val = val;
   }
};

node *levelb(node *root)
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

         // left
         cout << "enter left";
         cin >> data;

         if (data != -1)
         {
            temp->left = new node(data);
         }

         // right
         cout << "enter right";
         cin >> data;
         if (data != -1)
         {
            temp->right = new node(data);
         }
         size--;
      }
   }
   return root;
}
void level_print(node *root)
{
   if (root == 0)
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
         if (temp->left)
         {
            q.push(temp->left);
         }
         if (temp->right)
         {
            q.push(temp->right);
         }
         size--;
      }
   }
}
int main()
{

   node *root = 0;
   root = levelb(root);

   cout << "=== end ===" << endl;

   return 0;
}