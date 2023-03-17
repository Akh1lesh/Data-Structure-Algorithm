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

void createLoop(Node* &head)
{
	Node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	cout << temp->data << endl;
	temp->next = head->next->next;
	cout << temp->next->data << endl;
}

Node* detectLoop(Node* &head)
{
	if(head == NULL)
	{
		return NULL;
	}
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
			cout << slow -> data << endl;
			return slow;
		}
	}
	return NULL;
}

Node* getStartingelementloop(Node* &head)
{
	Node* slow = head;
	Node* intersection = detectLoop(head);
	while(slow!=intersection)
	{
		slow = slow -> next;
		intersection = intersection->next;
	}
	return slow;
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
	Node* startelement = getStartingelementloop(head);
	cout << "Starting element of the loop is :" << startelement->data << endl;
}