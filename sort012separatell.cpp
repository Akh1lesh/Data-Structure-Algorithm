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
	}
	cout << endl;
}

void insertAttail(Node* &tail,Node* &curr)
{
	tail->next = curr;
	tail = curr;
}
void sort012separate(Node* &head)
{
	Node* zerohead = new Node(-1);
	Node* zerotail = zerohead;
	Node* onehead = new Node(-1);
	Node* onetail = onehead;
	Node* twohead = new Node(-1);
	Node* twotail = twohead;

	Node* curr = head;
	while(curr!=NULL)
	{
		int value = curr->data;
		if(value == 0)
		{
			insertAttail(zerotail,curr);
		}
		else if(value == 1)
		{
			insertAttail(onetail,curr);
		}
		else if(value == 2)
		{
			insertAttail(twotail,curr);
		}
		curr = curr->next;
	}
	if(onehead->next!=NULL)
	{
		zerotail->next = onehead->next;
	}
	else
	{
		zerotail->next = twohead->next;
	}
	onetail->next = twohead->next;
	twotail->next = NULL;
	head = zerohead->next;
	//delete dummy varaible
	delete zerohead;
	delete onehead;
	delete twohead;
}


int main()
{
	Node* node1 = new Node(1);
	Node* head = node1;
	insertElement(head,0);
	insertElement(head,1);
	insertElement(head,0);
	insertElement(head,2);
	insertElement(head,2);
	insertElement(head,2);
	printll(head);
	sort012separate(head);
	printll(head);	
}