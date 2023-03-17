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
	cout << "Enter data at the node" << endl;
	int data;
	cin >> data;
	root = new Node(data);
	if(data == -1)
	{
		return NULL;
	}

	cout << "Enter data at left of the node " << endl;
	root->left = buildTree(root->left);
	cout << "Enter data at the right of the node " << endl;
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

int height(Node* root)
{
	if(root == NULL)
	{
		return 0;
	}

	int left = height(root->left);
	int right = height(root->right);
	return max(left,right) + 1;
}

int diameter(Node* root)
{
	if(root == NULL)
	{
		return 0;
	}

	int op1 = diameter(root->left);
	int op2 = diameter(root->right);
	int op3 = height(root->left) + height(root->right) + 1;
	return max(op1,max(op2,op3));
}

int main()
{
	Node* root = NULL;
	root = buildTree(root);
	levelOrdertraversal(root);
	int heightoftree = height(root);
	int diameteroftree = diameter(root);
	cout << "Height of the binary tree is : " << heightoftree << endl;
	cout << "Diameter of the binary tree is : " << diameteroftree << endl;
}