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
	cout << "Enter the data at node " << endl;
	int data;
	cin >> data;
	root = new Node(data);
	if(data == -1)
	{
		return NULL;
	}

	cout << "Enter data at left node " << endl;
	root->left = buildTree(root->left);
	cout << "Enter data at right node " << endl;\
	root->right = buildTree(root->right);

}

void inorderTraversal(Node* root)
{
	if(root == NULL)
	{
		return;
	}

	inorderTraversal(root->left);
	cout << root->data << " ";
	inorderTraversal(root->right);
}
int main()
{
	Node* root = NULL;
	root = buildTree(root);
	inorderTraversal(root)
}