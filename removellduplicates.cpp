#include<iostream>
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
		cout << "Memory is free for the node qith data with value" << value <<endl;
	}
};

void insertElement(Node* &head,int d)
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

void removeDuplicates(Node* &head)
{
	Node* temp = head;
	//cout << temp->data << endl;
	if(temp == NULL)
	{
		return;
	}
	while(temp!=NULL)
	{
		if((temp->next!=NULL) && (temp->next->data == temp->data))
		{
			temp->next = temp->next->next;
		}
		else
		{
			temp = temp->next;
		}
	}
}
int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	insertElement(head,20);
	insertElement(head,20);
	insertElement(head,30);
	insertElement(head,40);
	insertElement(head,40);
	insertElement(head,50);
	insertElement(head,60);
	insertElement(head,60);
	printll(head);
	removeDuplicates(head);
	printll(head);
}