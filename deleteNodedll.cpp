#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node* prev;

	//constructor
	Node(int d)
	{
		this->data = d;
		this->next = NULL;
		this->prev = NULL;
	}

	//destructor
	~Node()
	{
		int value = this->data;
		if(next!=NULL)
		{
			delete next;
			next = NULL;
		}

		cout << "Memory is free for the node with data " << value << endl;
	}
};

void printdll(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
void insertAttail(Node* &head, int d)
{
	if(head == NULL)
	{
		Node* temp = new Node(d);
		head = temp;
	}
	Node* temp = new Node(d);
	Node* temp1 = head;
	while(temp1->next!=NULL)
	{
		temp1 = temp1->next;
	}
	temp1->next = temp;
	temp->prev = temp1;
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

void deleteNodedll(Node* &head,int pos, int len)
{
	if(pos == 1)
	{
		Node* temp = head;
		temp->next->prev = NULL;
		head = temp->next;
		temp->next = NULL;
		delete temp;
		return;
	}
	if(pos == len)
	{
		Node* temp = head;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->prev->next = NULL;
		temp->prev = NULL;
		delete temp;
		return;
	}
	else
	{
		Node* temp = head;
		int count = 1;
		while(count<pos)
		{
			temp = temp->next;
		}
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		temp->next = NULL;
		temp->prev = NULL;
		delete temp;
	}
}
int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	insertAttail(head,30);
	printdll(head);
	insertAttail(head,70);
	printdll(head);
	insertAttail(head,90);
	printdll(head);
	//deleteNodedll(head,1);
	//printdll(head);
	int a = getLength(head);
	cout << a << endl;
	deleteNodedll(head,4,4);
	printdll(head);
	deleteNodedll(head,1,3);
	printdll(head);
}