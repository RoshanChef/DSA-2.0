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
         cout << "enter left " << temp->val << endl;
         cin >> data;

         if (data != -1)
         {
            temp->left = new node(data);
            q.push(temp->left);
         }

         // right
         cout << "enter right " << temp->val << endl;
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
         cout << temp->val << " ";
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
      cout << endl;
   }
}
int main()
{

   node *root = 0;
   root = levelb(root);
   level_print(root);

   cout << "=== end ===" << endl;

   return 0;
}