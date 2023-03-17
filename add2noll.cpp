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

void createll(Node* &head, int d)
{
	if(head == NULL)
	{
		Node* temp = new Node(d);
		head = temp;
	}
	else
	{
		Node* temp = head;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		Node* temp1 = new Node(d);
		temp->next = temp1;
	}
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

Node* reversell(Node* &head)
{
	Node* temp = head;
	Node* prev = NULL;
	Node* curr = temp;
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
Node* add(Node* &head1,Node* &head2, int len1, int len2)
{
	Node* first = reversell(head1);
	Node* second = reversell(head2);
	printll(first);
	printll(second);
	Node* new1 = NULL;
	if(len1<len2)
	{
		Node* temp = first;
		Node* temp1 = second;
		int carry = 0;
		while(temp!=NULL)
		{
			int sum = 0;
			int crr = carry;
			sum = sum + temp->data + temp1->data + crr;
			carry = sum/10;
			sum = sum%10;
			createll(new1,sum);
			temp = temp->next;
			temp1 = temp1->next;
		}
		printll(new1);
		int diff = len2 - len1;
		int count = 0;
		//cout << "a "<< endl;
		//cout << temp1->data << endl;
		while(count<diff)
		{
			
			int sum = 0;
			int crr = carry;
			sum = sum + temp1->data + crr;
			carry = sum/10;
			createll(new1,sum);
			temp1 = temp1->next;
			count++;
		}
		reversell(new1);
	}

	if(len1>len2)
	{
		Node* temp = second;
		Node* temp1 = first;
		int carry = 0;
		while(temp!=NULL)
		{
			int sum = 0;
			int crr = carry;
			sum = sum + temp->data + temp1->data + crr;
			carry = sum/10;
			sum = sum%10;
			createll(new1,sum);
			temp = temp->next;
			temp1 = temp1->next;
		}
		printll(new1);
		int diff = len1 - len2;
		int count = 0;
		//cout << "a "<< endl;
		//cout << temp1->data << endl;
		printll(new1);
		//cout << temp1->data << endl;
		//cout << len2 << len1 << endl;
		while(count<diff)
		{
			
			int sum = 0;
			int crr = carry;
			sum = sum + temp1->data + crr;
			carry = sum/10;
			createll(new1,sum);
			printll(new1);
			temp1 = temp1->next;
			count++;
		}
		reversell(new1);
	}

	if(len1 == len2)
	{
		Node* temp = first;
		Node* temp1 = second;
		int carry = 0;
		while(temp!=NULL && temp1!=NULL)
		{
			int sum = 0;
			int crr = carry;
			sum = sum + temp->data + temp1->data + crr;
			sum = sum%10;
			carry = sum/10;
			createll(new1,sum);
			temp = temp->next;
			temp1 = temp1->next;
		}
		/*if(carry!=0)
		{
			createll(new1,carry);
		}*/
		reversell(new1);
	}

	return new1;


}
int main()
{
	Node* head1 = NULL;
	Node* head2 = NULL;
	createll(head1,9);
	createll(head1,5);
	createll(head1,2);
	createll(head2,3);
	createll(head2,9);
	//createll(head2,9);
	printll(head1);
	printll(head2);
	int len1 = getLength(head1);
	int len2 = getLength(head2);
	cout << "Length of linked list 1 : " << len1 << endl;
	cout << "Length of linked list 2 : " << len2 << endl;
	Node* new1 = add(head1,head2,len1,len2);
	printll(new1);

}