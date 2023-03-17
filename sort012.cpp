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

void sort012(Node* &head)
{
	//counting number of zeros
	int count0 = 0;
	Node* temp = head;
	while(temp!=NULL)
	{
		if(temp->data == 0)
		{
			count0++;
			temp = temp->next;
		}
		else
		{
			temp = temp->next;
		}
	}
	cout << "count of 0 " << count0 << endl;

	//counting number of ones
	int count1 = 0;
	Node* temp1 = head;
	while(temp1!=NULL)
	{
		if(temp1->data == 1)
		{
			count1++;
			temp1 = temp1->next;
		}
		else
		{
			temp1 = temp1->next;
		}
	}
	cout << "count of 1 " << count1 << endl;

	//counting number of two
	int count2 = 0;
	Node* temp2 = head;
	while(temp2!=NULL)
	{
		if(temp2->data == 2)
		{
			count2++;
			temp2 = temp2->next;
		}
		else
		{
			temp2 = temp2->next;
		}
	}
	cout << "count of 2 " << count2 << endl;

	Node* temp3 = head;
	int res0 = 0;
	while(res0<count0)
	{
		temp3->data = 0;
		temp3 = temp3->next;
		res0++;
	}

	Node* temp4 = temp3;
	int res1 = 0;
	while(res1<count1)
	{
		temp4->data = 1;
		temp4 = temp4->next;
		res1++;
	}

	Node* temp5 = temp4;
	int res2 = 0;
	while(res2<count2)
	{
		temp5->data = 2;
		temp5 = temp5->next;
		res2++;
	}
}
int main()
{
	Node* node1 = new Node(1);
	Node* head = node1;
	insertElement(head,1);
	insertElement(head,0);
	insertElement(head,2);
	insertElement(head,1);
	insertElement(head,2);
	insertElement(head,2);
	printll(head);
	sort012(head);
	printll(head);	
}