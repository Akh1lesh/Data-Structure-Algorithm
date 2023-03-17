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
	cout << "Enter the data for the node : " << endl;
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

void levelOrderteraversal(Node* root)
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

pair<bool,int> isBalancedFast(Node* root)
{
	if(root == NULL)
	{
		pair<bool, int> p = make_pair(true,0);
		return p;
	}

	pair<bool,int> left = isBalancedFast(root->left);
	pair<bool,int> right = isBalancedFast(root->right);

	bool leftAns = left.first;
	bool rightAns = right.first;
	bool diff = abs(left.second - right.second) <= 1;

	pair<bool, int> ans;
	ans.second = max(left.second, right.second) + 1;
	if(leftAns && rightAns && diff)
	{
		ans.first = true;
	}
	else
	{
		ans.first = false;
	}
	return ans;
} 

int main()
{
	Node* root = NULL;
	root= buildTree(root);
	levelOrderteraversal(root);
	bool answer = isBalancedFast(root).first;
	cout << "Given tree is balanced or not ? " << answer << endl;
}