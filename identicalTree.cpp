#include<iostream>
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
		this->left = left;
		this->right = right;
	}
};

Node* buildTree(Node* root)
{
	cout << "Enter data for the node : " << endl;
	int data;
	cin >> data;
	root = new Node(data);
	if(data == -1)
	{
		return NULL;
	}

	cout << "Enter data for the left node : " << endl;
	root->left = buildTree(root->left);
	cout << "Enter data for the right node : " << endl;
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
		if(temp!=NULL)
		{
			cout << temp->data << " ";
		}
		q.pop();

		if(temp == NULL)
		{
			cout << endl;
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

bool isIdentical(Node* root1,Node* root2)
{
	if(root1 == NULL && root2 == NULL)
	{
		return true;
	}
	if(root1 == NULL && root2!=NULL)
	{
		return false;
	}
	if(root1 != NULL && root2 == NULL)
	{
		return false;
	}

	bool left = isIdentical(root1->left,root2->left);
	bool right = isIdentical(root1->right,root2->right);
	bool value = root1->data == root2->data;

	if(left && right && value)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	Node* root1 = NULL;
	Node* root2 = NULL;
	root1 = buildTree(root1);
	root2 = buildTree(root2);
	levelOrdertraversal(root1);
	levelOrdertraversal(root2);
	bool answer = isIdentical(root1,root2);
	cout << "Are given trees identical ?" << answer << endl;
}