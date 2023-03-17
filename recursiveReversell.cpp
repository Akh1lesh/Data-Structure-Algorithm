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
		this->next = next;
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

void reversell(Node* &head, Node* &curr,Node* &prev)
{
	//base case
	if(curr == NULL)
	{
		head = prev;
		return;
	}
	Node* forward = curr->next;
	reversell(head,forward,curr);
	curr->next = prev;

}
int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	insertAttail(head,30);
	insertAttail(head,70);
	insertAttail(head,150);
	insertAttail(head,200);
	printll(head);
	Node* prev = NULL;
	Node* curr = head;
	reversell(head,curr,prev);
	printll(head);
}