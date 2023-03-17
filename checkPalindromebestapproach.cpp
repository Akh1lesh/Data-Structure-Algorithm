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

void insertElement(Node* &head, int d)
{
	Node* temp = head;
	while(temp->next != NULL)
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

Node* middle(Node* &head)
{
	Node* slow = head;
	Node* fast = head->next;
	while(fast!=NULL && fast->next!=NULL)
	{
		fast = fast->next;
		if(fast->next!=NULL)
		{
			fast = fast->next;
		}
		slow = slow->next;
	}
	return slow;
}

Node* reverse(Node* &head)
{
	Node* temp = head;
	Node* curr = head;
	Node* prev = NULL;
	while(temp!=NULL)
	{
		temp = temp->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
		head = prev;
	}
	return head;
}
bool isPalindrome(Node* &head)
{
	Node* middle1 = middle(head);
	cout << middle1->data << endl;
	Node* temp = middle1->next;
	Node* reverse1 = reverse(temp);
	middle1->next = reverse1;
	Node* head1 = head;
	Node* head2 = middle1->next;
	while(head2!=NULL)
	{
		if(head1->data != head2->data)
		{
			return false;
		}
		head1 = head1->next;
		head2 = head2->next;
	}
	Node* reverse2 = reverse(temp);
	middle1->next = reverse1;
	return true;
}

int main()
{
	Node* node1 = new Node(1);
	Node* head = node1;
	insertElement(head,2);
	insertElement(head,3);
	insertElement(head,4);
	insertElement(head,3);
	insertElement(head,2);
	insertElement(head,1);
	insertElement(head,2);
	printll(head);
	bool a = isPalindrome(head);
	if(a)
	{
		cout << "Given linked list is palindrome" << endl;
	}
	else
	{
		cout << "Given linked list is not palindrome" << endl;
	}
}