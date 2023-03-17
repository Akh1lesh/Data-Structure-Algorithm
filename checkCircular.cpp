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
		cout << "Memory is deleted for the node with value " << value << endl;
	}
};

void insertelement(Node* &tail, int element, int d)
{
	if(tail == NULL)
	{
		Node* temp = new Node(d);
		temp->next = temp;
		tail = temp;
	}
	else
	{
		Node* curr = tail;
		while(curr->data !=element)
		{
			curr = curr->next;
		}
		Node* temp = new Node(d);
		temp->next = curr->next;
		curr->next = temp;

	}
}

void printcll(Node* tail)
{
	Node* temp = tail->next;
	cout << tail->data << " ";
	while(temp!=tail)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

bool checkCircular(Node* tail)
{
	Node* temp = tail->next;
	while(temp!=tail && temp!=NULL)
	{
		temp = temp->next;
	}
	if(temp == NULL)
	{
		return NULL;
	}
	if(temp == tail)
	{
		return true;
	}
	return false;
}
int main()
{
	Node* tail = NULL;
	insertelement(tail,5,3);
	insertelement(tail,3,7);
	insertelement(tail,7,15);
	insertelement(tail,15,80);
	insertelement(tail,80,150);
	insertelement(tail,150,207);
	printcll(tail);
	bool p = checkCircular(tail);
	if(p == true)
	{
		cout << "Linked list is circular in nature" << endl;
	}
	else
	{
		cout << "Linked list is not circular in nature " << endl;
	}
}