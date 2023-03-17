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
		Node* next;
	}

	//Destructor
	~Node()
	{
		int value = this->data;
		if(this->next!=NULL)
		{
			delete next;
			next = NULL;
		}
		cout << "Memory is free for the data " << value << endl;
	}
};

void insertelement(Node* &tail,int element, int d)
{
	if(tail == NULL)
	{
		Node* temp = new Node(d);
		tail = temp;
		temp->next = temp;
	}
	else
	{
		Node* curr = tail;
		while(curr->data!=element)
		{
			curr = curr->next;
		}
		//element found
		Node* temp = new Node(d);
		temp->next = curr->next;
		curr->next = temp;
	}
}

void printcll(Node* &tail)
{
	Node* temp = tail;
	do{
		cout << tail->data << " ";
		tail = tail->next;
	}while(tail!=temp);
	cout << endl;
}
int main()
{
	Node* tail = NULL;
	insertelement(tail,5,3);
	printcll(tail);
	//cout << tail->data << endl;
	insertelement(tail,3,7);
	printcll(tail);
	insertelement(tail,7,15);
	printcll(tail);
	insertelement(tail,15,36);
	printcll(tail);
	insertelement(tail,15,20);
	printcll(tail);

}