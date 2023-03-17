#include<iostream>
#include<stack>
#include<queue>
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
	cout << "Enter data for the node " << endl;
	int data;
	cin>>data;
	root = new Node(data);
	if(data == -1)
	{
		return NULL;
	}

	cout << "Enter data of the left node " << endl;
	root->left = buildTree(root->left);
	cout << "Enter data of the right node " << endl;
	root->right = buildTree(root->right);

}

void levelOrdertraversal(Node* root)
{
	queue<Node* > q;
	q.push(root);
	q.push(NULL);

	while(!q.empty())
	{
		Node* temp = q.front();
		if(temp != NULL)
		{
			cout << temp->data << " ";
		}
		
		q.pop();
		if(temp == NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			if(temp->left)
			{
				q.push(temp->left);
			}
			if(temp->right)
			{
				q.push(temp->right);
			}

		}

	}
}

void inorderTraversal(Node* root)
{
	stack<Node*> s;
	Node* curr = root;
	while(curr!=NULL || s.empty()==false)
	{
		s.push(curr);
		curr = curr->left;
	}

	curr = s.top();
	s.pop();
	cout << curr->data << " ";
	curr = curr->right;

}
int main()
{
	Node* root = NULL;
	root = buildTree(root);
	levelOrdertraversal(root);
	inorderTraversal(root);
}