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

node *lca(node *root, int n1, int n2)
{
   if (root == 0)
      return root;

   if (n1 == root->val || n2 == root->val)
      return root;

   node *left = lca(root->left, n1, n2);

   node *right = lca(root->right, n1, n2);

   if (left == 0)
      return right;
   if (right == 0)
      return left;
      
   return root;
}
int main()
{

   node *root = 0;
   root = levelb(root);
   level_print(root);

   cout << "Lca of 52 and 40 " << endl;
   cout << lca(root, 52, 40)->val << endl;

   cout << "=== end ===" << endl;

   return 0;
}