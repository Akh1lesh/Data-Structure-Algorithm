#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

void printll(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}cout << endl;
}

void insertAttail(Node* &tail, int d)
{
	Node* temp = new Node(d);
	tail->next = temp;
	tail = temp;
	//cout<<temp->data << endl;
}
int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;

	printll(head);

	insertAttail(tail,15);

	printll(head);

	insertAttail(tail,120);

	printll(head);

}