#include<iostream>
using namespace std;

class Node{
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

int getlength(Node* &head)
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

void insertAtpos(Node* &head, int d, int pos,int len)
{
	if(pos == 1)
	{
		Node* temp = new Node(d);
		temp->next = head;
		head->prev = temp;
		head = temp;
		return;
	}
	if(pos == len+1)
	{
		Node* temp = new Node(d);
		Node* temp1 = head;
		while(temp1->next!=NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
		temp->prev = temp1;
		return;
	}

	Node* temp = new Node(d);
	Node* temp1 = head;
	int count = 1;
	while(count<(pos-1))
	{
		temp1 = temp1->next;
		count++;
	}
	Node* temp2 = temp1->next;
	temp1->next = temp;
	temp->prev = temp1;
	temp2->prev = temp;
	temp->next = temp2;
}
int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	insertAttail(head,30);
	insertAttail(head,50);
	insertAttail(head,70);
	printdll(head);
	insertAtpos(head,90,3,4);
	printdll(head);
	insertAtpos(head,100,1,5);
	printdll(head);
	insertAtpos(head,200,7,6);
	printdll(head);
	int a = getlength(head);
	cout << a << endl;

}