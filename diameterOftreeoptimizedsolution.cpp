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
	cout << "Enter the data for first node " << endl;
	int data;
	cin >> data;
	root = new Node(data);
	if(data == -1)
	{
		return NULL;
	}

	cout << "Enter data for the left node " << endl;
	root->left = buildTree(root->left);
	cout << "Enter data for right node " << endl;
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

pair<int,int> diameterFast(Node* root)
{
	if(root == NULL)
	{
		pair<int,int> p = make_pair(0,0);
		return p;
	}

	pair<int,int> left = diameterFast(root->left);
	pair<int,int> right = diameterFast(root->right);

	int op1 = left.first;
	int op2 = right.first;
	int op3 = left.second + right.second + 1;

	pair<int,int> ans;
	ans.first = max(op1,max(op2,op3));
	ans.second = max(left.second, right.second) + 1;

	return ans;
}
int main()
{
	Node* root = NULL;
	root = buildTree(root);
	levelOrdertraversal(root);
	int diameter = diameterFast(root).first;
	cout << "Diameter of the given binary tree is : " << diameter << endl;
	int height = diameterFast(root).second;
	cout << "Height of the given binary tree is  : " << height << endl;
}