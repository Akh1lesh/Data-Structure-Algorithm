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

	//destructor
	~Node()
	{
		int value = this->data;
		if(this->next != NULL)
		{
			delete next;
			this->next = NULL;
		}
		cout << "the deleted node  " << value << endl;
	}
};

void printll(Node* head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}cout<<endl;

}
void insertAttail(Node* &tail, int d)
{
		Node* temp = new Node(d);
		tail->next = temp;
		tail = temp;
}

void deleteAnode(Node* &head, int pos)
{
	if(pos == 1)
	{
		Node* temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}

	else
	{
		Node* prev = NULL;
		Node* curr = head;

		int count = 1;
		while(count < pos)
		{
			prev = curr;
			curr = curr -> next;
			count++;
		}
		prev->next = curr->next;
		curr->next = NULL;
		delete curr;
	}
}

int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;
	insertAttail(tail,50);
	insertAttail(tail,70);
	insertAttail(tail,90);
	insertAttail(tail,120);
	printll(head);
	deleteAnode(head, 5);
	printll(head);
	cout << "head  " << head->data << endl;
	cout << "tail  " << tail->data << endl;
}