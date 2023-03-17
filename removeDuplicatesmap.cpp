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
		if(this->next = NULL)
		{
			delete next;
			next = NULL;
		}
		cout << "Memory is free for the node with value " << value << endl;
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

void removeDuplicatesmap(Node* &head)
{
	Node* temp = head;
	Node* prev = NULL;
	map<Node*,bool> visited;
	while(temp!=NULL)
	{
		cout << temp->data  << endl;
		cout << "visited " << visited[temp] << endl;
		if(visited[temp] == true)
		{
			cout << "a " << endl;
			cout << prev->data << temp->data <<endl;
			prev->next = temp->next;
		}
		visited[temp] = true;
		cout << "visited " << visited[temp] << endl;
		prev = temp;
		temp = temp->next;
		cout << prev->data << temp->data << endl;
		cout << "next visited " << visited[temp->next] << endl;
	}
	printll(head);
}

int main()
{
	Node* node1 = new Node(4);
	Node* head = node1;
	insertElement(head,2);
	insertElement(head,5);
	insertElement(head,4);
	insertElement(head,2);
	insertElement(head,2);
	insertElement(head,4);
	printll(head);
	removeDuplicatesmap(head);
	printll(head);

}