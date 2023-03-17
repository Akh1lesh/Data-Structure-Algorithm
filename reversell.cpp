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
	cout << endl;
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

void reversell(Node* &head)
{
	if(head == NULL || head->next == NULL)
	{
		return;
	}
	Node* prev = NULL;
	Node* curr = head;
	Node* temp = NULL;
	while(curr!=NULL)
	{
		temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
		head = prev;
	}
}
int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	insertAttail(head,30);
	printll(head);
	insertAttail(head,70);
	printll(head);
	insertAttail(head,80);
	printll(head);
	insertAttail(head,150);
	printll(head);
	reversell(head);
	printll(head);
}