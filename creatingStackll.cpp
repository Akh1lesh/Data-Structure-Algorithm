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
		cout << "Memory is free for the node with value : " << value << endl;
	}
};

class Stack
{
public:
	Node* top;

	Stack()
	{
		top = NULL;
	}

	void push(int element)
	{
		Node* temp = new Node(element);
		
		else
		{
			cout << "Stack overflow" << endl;
		}
	}

	void pop()
	{
		if(top>=0)
		{
			top--;
		}
		else
		{
			cout << "Stack overflow" << endl;
		}
	}

	void isEmpty()
	{
		if(top == -1)
		{
			cout << "Stack is empty " << endl;
		}
		else
		{
			cout << "Stack is not empty " << endl;
		}
	}

	int peak()
	{
		Node
		if(top>=0)
		{
			Node* temp = head;
			int count = 0;
			while(count<=top)
			{
				count++;
				temp = temp->next;
			}
		return temp->data;
		}
		else
		{
			cout << "Stack is Empty " << endl;
		}
	}
};

int main()
{
	Stack s(5);
	s.push()
}