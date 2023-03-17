#include<iostream>
#include<map>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node* prev;

	Node(int d)
	{
		this->data = d;
		this->next = NULL;
		this->prev = NULL;
	}
};

void printdll(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
void insertAttail(Node* &head, int d)
{
	Node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	Node* temp1 = new Node(d);
	temp->next = temp1;
	temp1->prev = temp;
}

void createLoop(Node* head)
{
	Node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	cout << temp->data << endl;
	temp->next = head->next;
	cout << temp->next->data << endl;
}

bool detectLoop(Node* &head)
{
	Node* temp = head;
	map<Node*,bool> visited;
	while(temp!=NULL)
	{
		if(visited[temp] == true)
		{
			return true;
		}
		visited[temp] = true;
		temp = temp->next;
	}
	return false;
}

int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	insertAttail(head,20);
	insertAttail(head,30);
	insertAttail(head,40);
	insertAttail(head,50);
	insertAttail(head,60);
	printdll(head);
	createLoop(head);
	bool a = detectLoop(head);
	if(a)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False "<< endl;
	}
}
