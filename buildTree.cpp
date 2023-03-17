#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* left;
	Node* right;

	Node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

Node* buildTree(Node* root)
{
	cout << "Enter data for the root node " << endl;
	int data;
	cin >> data;
	root = new Node(data);
	if(data == -1)
	{
		return NULL;
	}

	cout << "Enter the element to insert at left of the node " << endl;
	root->left = buildTree(root->left);
	cout << "Enter the element to insert at right of the node" << endl;
	root->right = buildTree	(root->right);
}


int main()
{
	Node* root = NULL;
	root = buildTree(root);

	return 0;
}
