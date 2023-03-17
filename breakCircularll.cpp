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
		cout << "Memory is free for the node with value " << value << endl;
	}
};

void circularll(Node* &head, int d)
{
	if(head == NULL)
	{
		Node* temp = new Node(d);
		temp->next = temp;
		head = temp;
		return;
	}
	Node* temp = head;
	//cout << temp->data << temp->next->data << endl;
	while(temp->next!=head)
	{
		temp = temp->next;
	}
	Node* temp1 = new Node(d);
	temp1->next = temp->next;
	temp->next = temp1;
	//cout << "d" << temp->data << temp1->data << endl;
}

void printcll(Node* &head)
{
	Node* temp = head->next;
	cout << head->data << " ";
	while(temp!=head)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}cout << endl;
}

int getLength(Node* &head)
{
	Node* temp = head;
	int len = 1;
	while(temp->next!=head)
	{
		len++;
		temp = temp->next;
	}
	return len;
}

Node* createCll1(Node* head, int size,int len)
{
	Node* temp = head;
	int count = 1;
	while(count<size)
	{
		cout << "a " << temp->data << " ";
		temp = temp->next;
		count++;
	}
	cout << temp->data << endl;
	Node* temp1 = temp->next;
	//temp->next = NULL;
	temp->next = head;
	printcll(head);
	Node* head2 = temp1;
	int res = 1;
	while(res<(len - size))
	{
		temp1 = temp1->next;
		res++;
	}
	temp1->next = head2;
	printcll(head2);
}

Node* createCll2(Node* head, int size, int len)
{
	int size1 = len - size;
	cout << size1 << endl;
	int count = 1;
	Node* temp = head;
	while(count<size)
	{
		cout << "a " <<temp->data << endl;
		temp = temp->next;
		count++;
	}
	cout << "temp" << temp->data << endl;
	Node* temp1 = temp->next;
	cout << "temp1" << temp1->data << endl;
	temp->next = NULL;
	Node* head2 = temp1;
	int res = 1;
	while(res<size1)
	{
		temp1 = temp1->next;
		res++;
	}
	temp1->next = head2;
	return head2;
}

int main()
{
	Node* head = NULL;
	circularll(head,1);
	circularll(head,2);
	circularll(head,3);
	circularll(head,4);
	circularll(head,5);
	circularll(head,6);
	printcll(head);
	int len = getLength(head);
	cout << "Length of the linked list is : " << len << endl;
	int middle = len/2;
	if(len%2 != 0)
	{
		Node* head1 = createCll1(head,middle+1,len);
	}

	if(len%2 == 0)
	{
		Node* head1 = createCll1(head,middle,len);
	}
}