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

	//destructor
	~Node()
	{
		int value = this->data;
		if(this->next!=NULL)
		{
			delete next;
			next = NULL;
		}
		cout << "Memory is free for the node with data " << value << endl;
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

void createLoop(Node* &head)
{
	Node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	//cout << temp->data << endl;
	temp->next = head->next;
	//cout << temp->next->data << endl;
}

bool detectLoop(Node* &head)
{
	Node* slow = head;
	Node* fast = head;
	while(slow!=NULL && fast!=NULL)
	{
		fast = fast->next;
		if(fast!=NULL)
		{
			fast = fast->next;
		}
		slow = slow->next;
		if(slow == fast)
		{
			cout << "slow and fast become equal at node with data " << slow -> data << endl;
			return true;
		}
	}
	return false;
}

int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	insertElement(head,20);
	insertElement(head,30);
	insertElement(head,40);
	insertElement(head,50);
	insertElement(head,60);
	printll(head);
	createLoop(head);
	bool a = detectLoop(head);
	if(a)
	{
		cout << "Loop is present" << endl;
	}
	else
	{
		cout << "Loop is not present" << endl;
	}
}