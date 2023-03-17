#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	//constructor
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

void insertnode(Node* &head, int d)
{
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
}

void printll(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL)
		{
			cout << temp->data << " ";
			temp = temp-> next;
		}
	cout<<endl;
}

int main()
{
	Node* node1 = new Node(10);
	Node* head=node1;
	//cout << node1->data << endl;
	//cout << node1-> next << endl;
	printll(head);
	insertnode(head,12);
	printll(head);
	insertnode(head,13);
	printll(head);
}