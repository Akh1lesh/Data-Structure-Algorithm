#include<iostream>
#include<map>
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

bool detectCycle(Node* &head)
{
	Node* temp = head;
	map<Node*,bool> visited;
	while(temp!=NULL)
	{
		cout << "visited " << visited[temp] << endl;
		if(visited[temp] == true)
		{
			cout << "Loop is present at element : " << temp->data << endl;
			return true;
		}
		visited[temp] = true;
		cout << "visited" << visited[temp] << endl;
		temp = temp->next;
	}
	return false;
}

void createCycle(Node* &head)
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
	createCycle(head);
	bool a = detectCycle(head);
	if(a)
	{
		cout << "Is cycle is detected ?" << "True" << endl;
	}
	else
	{
		cout << "Is cycle is detected ? " << "False " << endl;
	}

}