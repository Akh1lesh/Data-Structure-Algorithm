#include<iostream>
#include<vector>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	Node(int d)
	{
		this->data = d;
		this->next = NULL;
	}

	~Node()
	{
		int value = this->data;
		if(this->next!=NULL)
		{
			delete next;
			next = NULL;
		}
		cout << "Memory is free for the node with value " << value << endl;
	}
};

void insertElement(Node* &head, int d)
{
	Node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	Node* temp1 = new Node(d);
	temp->next = temp1;
}

void printll(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}cout << endl;
}

int getLength(Node* &head)
{
	Node* temp = head;
	int len = 0;
	while(temp!=NULL)
	{
		len++;
		temp = temp->next;
	}
	return len;
}
bool checkPalindrome(Node* &head, int len)
{
	Node* temp = head;
	vector<int> v;
	vector<int> w;
	while(temp!=NULL)
	{
		v.push_back(temp->data);
		temp = temp->next;
	}
	for(int i=len-1; i>=0; i--)
	{
		w.push_back(v[i]);
	}

	//for(int i=0; i<v.size(); i++)
	//{
	//	cout << v[i] << " ";
	//}
	for(int i = 0; i<len; i++)
	{
		if(v[i] != w[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	Node* node1 = new Node(1);
	Node* head = node1;
	insertElement(head,1);
	insertElement(head,2);
	insertElement(head,2);
	insertElement(head,1);
	insertElement(head,1);
	insertElement(head,3);
	printll(head);
	int len = getLength(head);
	cout << "Length of the linked list : " << len << endl;
	bool a = checkPalindrome(head,len);
	cout << "Given linked list is Palindrome? " << a << endl;
}