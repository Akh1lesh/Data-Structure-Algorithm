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

void sortedll(Node* &head)
{
	Node* temp = head;
	Node* curr = temp->next;
	while(temp!=NULL)
	{
		cout << temp->data << endl;
		while(curr!=NULL)
		{
			if(curr->data < temp->data)
			{
				int temp1 = temp->data;
				temp->data = curr->data;
				curr->data = temp1;
				temp = temp->next;
			}
			printll(head);
			curr = curr->next;
		}
	temp = temp->next;
	cout << curr->data << temp->data << endl;
	}
}
int main()
{
	Node* node1 = new Node(4);
	Node* head = node1;
	insertElement(head,2);
	insertElement(head,5);
	insertElement(head,4);
	insertElement(head,2);
	insertElement(head,2);
	insertElement(head,4);
	printll(head);
	sortedll(head);
	printll(head);
}