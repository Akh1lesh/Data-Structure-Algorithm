#include<iostream>
#include<queue>
#include<stack>
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

	cout << "Enter the data at left node " << endl;
	root->left = buildTree(root->left);
	cout << "Enter the data at right node " << endl;
	root->right = buildTree(root->right);

}
void reverseLevelordertraversal(Node* root)
{
	queue<Node* > q;
	stack<Node* > s;

	q.push(root);


	while(!q.empty())
	{
		root = q.front();
		q.pop();
		s.push(root);

		if(root->right)
		{
			q.push(root->right);
		}
		if(root->left)
		{
			q.push(root->left);
		}
	}

	while(!s.empty())
	{
		root = s.top();
		cout << root->data << " ";
		s.pop();

	}cout<<endl;
}

int main()
{
	Node* root = NULL;
	root = buildTree(root);
	reverseLevelordertraversal(root);

}