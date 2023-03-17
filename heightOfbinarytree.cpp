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
	cout << "Enter data at node " << endl;
	int data;
	cin >> data;
	root = new Node(data);
	if(data == -1)
	{
		return NULL;
	}

	cout << "Enter data to left of the node " << endl;
	root->left = buildTree(root->left);
	cout << " Enter data to right of the node " << endl;
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
		if(temp !=NULL)
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

int heightOftree(Node* root)
{
	if(root == NULL)
	{
		return 0;
	}

	int left = heightOftree(root->left);
	int right = heightOftree(root->right);
	int ans = max(left,right)+1;
	return ans;
}

int main()
{
	Node* root = NULL;
	root = buildTree(root);
	levelOrdertraversal(root);
	int height = heightOftree(root);
	cout << "Height of the binary tree is : " << height << endl;
}