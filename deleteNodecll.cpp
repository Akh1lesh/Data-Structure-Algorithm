//Resolve the error in this code when we delete the single node
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

	//Destructor
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

void insertelement(Node* &tail, int element, int d)
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
		Node* temp = new Node(d);
		temp->next = curr->next;
		curr->next = temp;
	}
}

void printcll(Node* &tail)
{
	Node* temp = tail;
	if(tail == 0)
	{
		cout << "list is empty" << endl;
		return;
	}
	do{
		cout << tail->data << " ";
		tail=tail->next;
	}while(tail!=temp);
	cout << endl;
}

void deleteNode(Node* &tail,int element)
{
	if(tail == NULL)
	{
		cout<< "Linked list is empty, please check again" << endl;
	}
	else
	{
		Node* prev = tail;
		Node* curr = tail->next;
		
		while(curr->data!=element)
		{
			prev = curr;
			curr = curr->next;
		}
		prev->next = curr->next;
		if(curr == prev)
		{
			tail == NULL;
		}
		else if(tail == curr) 
		{
			tail = curr->next;
		}
		curr->next = NULL;
		delete curr;

	}
}
int main()
{
	Node* tail = NULL;
	insertelement(tail,5,3);
	printcll(tail);
	/*insertelement(tail,3,30);
	printcll(tail);
	insertelement(tail,30,150);
	printcll(tail);
	insertelement(tail,150,70);
	printcll(tail);
	insertelement(tail,70,5);
	printcll(tail);*/
	deleteNode(tail,3);
	printcll(tail);
}