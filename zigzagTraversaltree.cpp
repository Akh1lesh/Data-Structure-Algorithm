#include<iostream>
#include<queue>
#include<vector>
using namesapace std;

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
	cout << "Enter the data at the node : " << endl;
	int data;
	cin>>data;
	root = new Node(data);
	if(data == -1)
	{
		return NULL;
	}

	cout << "Enter data at the left node : " << endl;
	root->left = buildTree(root->left);
	cout << "Enter data at the right node :" << endl;
	root-|>right = buildTree(root->right);
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

void zigzagTraversal(Node* root)
{
	queue<Node* > r;
	r.push(root);
	bool leftToright = true;
	vector<int> result;
	while(!r.empty())
	{
		int size = r.size();
		vector<int> ans(size);

		for(int i=0; i<size; i++)
		{
			Node* frontNode = r.front();
			r.pop();
			int index = leftToright? i : size - i - 1;
			ans[index] = frontNode->data;
			if(frontNode->left)
			{
				q.push(frontNode->left);
			}
			if(frontNode->right)
			{
				q.push(frontNode->right);
			}
		}
		//change the direction;
		leftToright = !leftToright;
		for(auto i: ans)
		{
			result.push_back(i);
		}
	}
	for(int j=0; j<result.size(); j++)
	{
		cout << result[j] << " ";
	}
}

int main()
{
	Node* root = NULL;
	root = buildTree(root);
	levelOrdertraversal(root);
	zigzagTraversal(root);

	//for(int j=0; j<answer.size(); j++)
	//{
	//	cout << answer[j] << " ";
	//}

}