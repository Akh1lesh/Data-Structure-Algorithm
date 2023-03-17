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
		this->left = NULL;
		this->right = NULL;
	}
};

void buildFromlevelorder(Node* &root)
{
	queue<Node* > q;
	cout << "Enter data for the node " << endl;
	int data;
	cin >> data;
	root = new Node(data);
	q.push(root);

	while(!q.empty())
	{
		Node* temp = q.front();
		q.pop();
		cout << "Enter data left of the current node " << temp->data << endl;
		int leftData;
		cin >> leftData;
		if(leftData != -1)
		{
			temp->left = new Node(leftData);
			q.push(temp->left);
		}

		cout << "Enter data right of the current node " << temp->data << endl;
		int rightData;
		cin >> rightData;
		if(rightData != -1)
		{
			temp->right = new Node(rightData);
			q.push(temp->right);
		}


	} 
}

Node* levelOrdertraversal(Node* root)
{
	queue<Node* > q;
	q.push(root);
	q.push(NULL);

	while(!q.empty())
	{
		Node* temp = q.front();
		q.pop();
		if(temp != NULL)
		{
			cout << temp->data << " ";
		}

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

int main()
{
	Node* root = NULL;
	buildFromlevelorder(root);
	levelOrdertraversal(root);
}