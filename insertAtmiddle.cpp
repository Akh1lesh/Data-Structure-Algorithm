#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

void insertAthead(Node* &head,int d)
{
	Node* temp = new Node(d);
	temp->next = head;
	head = temp;
}

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

void insertAttail(Node* &tail, int d)
{
	Node* temp = new Node(d);
	tail->next = temp;
	tail = temp;
}

void insertAtmiddle(Node* &head,int d,int pos,Node* &tail)
{
	Node* temp = head;
	int n = 1;
	if(pos == 0)
	{
		insertAthead(head,d);
		return;

	}
	while(n<pos)
	{
		temp = temp->next;
		n += 1;
	}
	if(temp->next == NULL)
	{
		insertAttail(tail,d);
		return;
	}
	Node* temp1 = new Node(d);
	temp1->next	= temp->next;
	temp->next = temp1;
}
int main()
{
	Node* node1 = new Node(10);
	Node* tail = node1;
	Node* head	= node1;

	printll(head);
	insertAttail(tail,15);
	printll(head);
	insertAttail(tail,30);
	printll(head);
	insertAttail(tail,50);
	printll(head);
	insertAtmiddle(head,80,4,tail);
	printll(head);
	cout << tail->data << endl;
	insertAtmiddle(head,150,0,tail);
	printll(head);
	cout<<head->data <<endl;
}