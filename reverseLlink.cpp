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

	//Destructor
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

Node* reverseKgroups(Node* head,int k)
{
	Node* prev = NULL;
	Node* curr = head;
	Node* next = NULL;
	int count = 1;
	while(curr!=NULL && count<k)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	if(next!=NULL)
	{
		head->next = reverseKgroups(next,k);
	}
	return prev;
}

void printll(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	insertAttail(head,35);
	insertAttail(head,55);
	insertAttail(head,75);
	insertAttail(head,95);
	insertAttail(head,105);
	insertAttail(head,125);
	insertAttail(head,145);
	printll(head);
	reverseKgroups(head,2);
	printll(head);
}