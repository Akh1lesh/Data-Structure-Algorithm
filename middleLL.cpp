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

int middlell(Node* &head, int len)
{
	Node* temp = head;
	//if(len%2 != 0)
	
	int middle = (len/2+1);
	int count = 1;
	while(count<middle)
	{
		temp = temp->next;
		count++;
	}
	return temp->data;
}
/*
	else
	{
		int middle = (len/2 + 1);
		int count = 1;
		while(count<middle)
		{
			temp = temp->next;
			count++;
		}
		return temp->data;
	}
	*/
//}

int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	insertAttail(head,50);
	insertAttail(head,90);
	insertAttail(head,170);
	insertAttail(head,190);
	insertAttail(head,220);
	printll(head);
	int a = getLength(head);
	cout << "Length of the linked list " << a << endl;
	int b = middlell(head,a);
	cout << "Middle element of the linked list is " << b << endl;
}