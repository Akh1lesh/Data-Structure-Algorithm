#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* prev;

	//constructor
	Node(int d){
		this -> data = d;
		this -> next = NULL;
		this -> prev = NULL;
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
	Node* temp = new Node(d);
	Node* temp1 = head;
	while(temp1->next!=NULL)
	{
		temp1 = temp1->next;
	}
	temp->prev = temp1;
	temp1->next = temp;
}

void insertAthead(Node* &head,int d)
{
	Node* temp = new Node(d);
	temp->next = head;
	head->prev = temp;
	//cout << head->prev->data << endl;
	head = temp;
}

int getLength(Node* head)
{
	int len = 0;
	Node* temp = head;
	while(temp!=NULL)
	{
		len++;
		temp = temp->next;
	}
	return len;
}
int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	printdll(head);
	insertAttail(head,20);
	printdll(head);
	insertAttail(head,30);
	printdll(head);
	insertAttail(head,50);
	printdll(head);
	insertAthead(head,70);
	printdll(head);
	int a = getLength(head);
	cout << a << endl;

}