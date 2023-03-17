#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	//constructor
	Node(int d)
	{
		this->data = d;
		this->next = NULL;
	}

	//destructor
	~Node()
	{
		int value = this->data;
		if(this->next!=NULL)
		{
			delete next;
			next = NULL;
		}
		cout << "Memory is free for the node with data " << value << endl;
	}
};

void printll(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout<<endl;
}
void insertAttail(Node* &head, int d)
{
	Node* temp = new Node(d);
	Node* temp1 = head;
	while(temp1->next!=NULL)
	{
		temp1 = temp1->next;
	}
	temp1->next = temp;
}

int middleFastslow(Node* &head)
{
	Node* slow = head;
	Node* fast = head->next;
	while(fast!=NULL)
	{
		fast = fast->next;
		if(fast!=NULL)
		{
			fast = fast->next;
		}
		slow = slow->next;
	}
	return slow->data;
}
int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	insertAttail(head,30);
	insertAttail(head,80);
	insertAttail(head,150);
	insertAttail(head,200);
	insertAttail(head,250);
	printll(head);
	int a = middleFastslow(head);
	cout << "Middle element of the linked list is " << a << endl;
}