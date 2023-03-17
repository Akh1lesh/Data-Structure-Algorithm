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

int getLength(Node* &head)
{
	Node* temp = head;
	int len = 0;
	while(temp!=NULL)
	{
		len++;
		temp = temp->next;
	}
	return len;
}

Node* reversell(Node* &head1,int middle)
{
	Node* temp = head1;
	Node* prev = NULL;
	Node* curr = temp;
	while(temp!=NULL)
	{
		temp = temp->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
		head1 = prev;
	}
	printll(head1);
	/*int count = 1;
	Node* temp1 = head1;
	while(count<middle)
	{
		count++;
		temp1 = temp1->next;
	}
	temp1->next = NULL;*/
	return head1;
}
Node* solve(Node* &head,int middle, int len)
{
	int count = 0;
	Node* temp = head;
	while(count<middle)
	{
		count++;
		temp = temp->next;
	}
	Node* newll = new Node(-1);
	Node* head1 = newll;
	Node* temp1 = temp;
	while(temp->next!=NULL)
	{
		temp = temp->next;
		Node* point = head1;
		Node* res = new Node(temp->data);
		while(point->next!=NULL)
		{
			point = point->next;
		}
		point->next = res;
	}
	printll(head1);
	Node* halfll = reversell(head1,middle);
	//cout << temp->data << endl;
	cout << temp1->data << endl;
	temp1->next = halfll;
	Node* temp2 = head;
	while(temp2->next->data != -1)
	{
		temp2 = temp2->next;
	}
	//cout << temp2->data << endl;
	temp2->next = NULL;
	printll(head);
	return head;

}

bool checkPalindrome(Node* &head,int middle)
{
	Node* temp = head;
	int count = 0;
	while(count<middle)
	{
		count++;
		temp = temp->next;
	}
	Node* temp1 = temp->next;
	Node* temp2 = head;
	while(temp1!=NULL)
	{
		if(temp1->data != temp2->data)
		{
			return false;
		}
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
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
	insertElement(head,4);
	printll(head);
	int len = getLength(head);
	cout << "Length of the linked list is : " << len << endl;
	int middle = len/2;
	cout << middle << endl;
	if(len%2 != 0)
	{
		solve(head,middle,len);
		printll(head);
	}
	else
	{
		solve(head,middle-1,len);
		printll(head);
	}
	bool a = checkPalindrome(head,middle);
	if(a)
	{
		cout << "Given linked list is Palindrome" << endl;
	}
	else
	{
		cout << "Given linked list is not Palindrome " << endl;
	}
}