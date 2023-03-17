#include<iostream>
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
		cout << "Memory is free for the node with  data " << value << endl;
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

void removeDuplicates(Node* &head)
{
	Node* temp = head;
	Node* curr = temp->next;
	Node* prev = temp;
	while(temp!=NULL && curr!=NULL)
	{
		//cout << temp->data << endl;
		while(curr!=NULL)
		{
			if(curr->data != temp->data)
			{
				curr = curr->next;
				prev = prev->next;
			}
			else
			{
				//cout << curr->data << temp->data << prev->data << endl;
				prev->next = curr->next;
				curr = prev->next;
			}
		}
		//printll(head);
		temp = temp->next;
		curr = temp->next;
		prev = temp;
	}
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
	insertElement(head,2);
	//printll(head);
	removeDuplicates(head);
	printll(head);
}