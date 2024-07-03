#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int val;
	node *left, *right;
	node()
	{
		this->val = 0;
		this->left = 0;
		this->right = 0;
	}
	node(int val)
	{
		this->val = val;
		this->left = 0;
		this->right = 0;
	}
};

node *insertion(node *root, int data)
{
	if (root == 0)
	{
		root = new node(data);
		return root;
	}
	if (data < root->val)
	{
		root->left = insertion(root->left, data);
	}
	else if (data > root->val)
	{
		root->right = insertion(root->right, data);
	}
	return root;
}

void takeInput(node *&root)
{
	int val;
	cin >> val;
	while (val != -1)
	{
		root = insertion(root, val);
		cin >> val;
	}
}

void level_order(node *root)
{
	if (root == 0)
		return;
	queue<node *> temp;
	temp.push(root);

	while (!temp.empty())
	{
		int size = temp.size();
		while (size)
		{
			cout << temp.front()->val << " ";
			if (temp.front()->left)
				temp.push(temp.front()->left);
			if (temp.front()->right)
				temp.push(temp.front()->right);
			temp.pop();
			size--;
		}
		cout << endl;
	}
}
int max_val(node *root)
{
	if (root == 0)
		return 0;

	while (root->right)
	{
		root = root->right;
	}
	return root->val;
}

node *deletion(node *root, int target)
{
	if (root == 0)
		return root;

	if (root->val == target)
	{
		// 4 cases
		// 1 zero child
		if (root->left == 0 && root->right == 0)
		{
			delete root;
			return 0;
		}

		// 2 left child only
		if (root->left != 0 && root->right == 0)
		{
			node *child_lf = root->left;
			delete root;
			return child_lf;
		}

		// 3 right child only
		if (root->right != 0 && root->left == 0)
		{
			node *child_rg = root->right;
			delete root;
			return child_rg;
		}

		// 4 both child
		if (root->left != 0 && root->right != 0)
		{
			int inOrderPre = max_val(root->left);
			root->val = inOrderPre;
			root->left = deletion(root->left, inOrderPre);
			return root;
		}
	}else if (target > root->val){
		root->right = deletion(root->right, target);
	}
	else if (target < root->val){
		root->left = deletion(root->left, target);
	}
	return root;
}

int main()
{
	node *root = 0;
	takeInput(root);
	cout << "Before " << endl;
	level_order(root);
	deletion(root, 100);
	cout << "\n\nAfter " << endl;
	level_order(root);

	return 0;
}