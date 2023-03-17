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
		cout << "Memory is free for the node with value : " << value << endl;
	}
};

int getLength(Node* &head)
{
	Node* temp = head->next;
	int len = 1;
	while(temp!=head)
	{
		len++;
		temp = temp->next;
	}
	return len;
}
void printcll(Node* &head)
{
	Node* temp = head->next;
	cout << head->data << " ";
	while(temp!=head)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;

}
void insertElement(Node* &head,int d)
{
	/*f(head == NULL)
	{
		cout << "A " <<endl;
		Node* temp = new Node(d);
		head = temp;
	}*/
	Node* temp1 = head;
	while(temp1->next!=NULL && temp1->next!=head)
	{
		temp1 = temp1->next;
	}
	Node* temp = new Node(d);
	temp->next = temp1->next;
	temp1->next = temp;
}

bool isCircular(Node* &head,int len)
{
	int count = 1;
	Node* temp = head;
	while(count<len)
	{
		temp = temp->next;
		count++;
	}
	if(temp->next == head)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	Node* node1 = new Node(5);
	Node* head = node1;
	head->next = head;
	cout << head -> data << endl;

	insertElement(head,10);
	//printcll(head);
	insertElement(head,30);
	//printcll(head);
	insertElement(head,50);
	insertElement(head,70);
	printcll(head);

	int len = getLength(head);
	cout << "Length of circular linked list " << len << endl;

	bool p = isCircular(head,5);
	cout << "Is linked list is circular?  "  << p << endl;
}