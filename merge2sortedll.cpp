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

void createll1(Node* &head1,int d)
{
	if(head1 == NULL)
	{
		Node* temp = new Node(d);
		head1 = temp;
	}
	else
	{
		Node* temp = head1;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		Node* temp1 = new Node(d);
		temp->next = temp1;
	}
	//return head1;
}

void printll1(Node* &head1)
{
	Node* temp = head1;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}cout << endl;

}

void createll2(Node* &head2,int d)
{
	if(head2 == NULL)
	{
		Node* temp = new Node(d);
		head2 = temp;
	}
	else
	{
		Node* temp = head2;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		Node* temp1 = new Node(d);
		temp->next = temp1;
	}
	//return head1;
}


void printll2(Node* &head2)
{
	Node* temp = head2;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}cout << endl;

}

Node* smallest(Node* &head1, Node* &head2)
{
	if(head1->data <= head2->data)
	{
		return head1;
	}
	else
	{
		return head2;
	}
}

Node* largest(Node* &head1,Node* &head2)
{
	if(head1->data <= head2->data)
	{
		return head2;
	}
	else
	{
		return head1;
	}
}
Node* merge2sortedll(Node* &head1,Node* &head2)
{
	if(head1 == NULL)
	{
		return head2;
	}
	if(head2 == NULL)
	{
		return head1;
	}
	Node* min = smallest(head1,head2);
	Node* temp = largest(head1,head2);
	Node* curr = min->next;
	Node* prev = min;
	while(temp!=NULL)
	{
		//cout << temp->data << endl;
		if(curr!=NULL || prev!=NULL)
		{
		if((temp->data <= curr->data) && (temp->data >= prev->data))
		{
			Node* temp1 = new Node(temp->data);
			prev->next = temp1;
			temp1->next = curr;
			prev = prev->next;
			//cout << prev->data << curr->data << endl;
			temp = temp->next;
			//cout << prev->data << curr->data << endl;
		}
		else
		{
			curr = curr->next;
			prev = prev->next;
			//cout << prev->data << curr->data << endl;
		}
		}
	}	
	return min;
}

int getlength(Node* &head)
{
	int len = 0;
	Node* temp = head;
	while(temp!=NULL)
	{
		len++;
		temp = temp->next;
	}
	return len;
} 
int main()
{
	Node* head1 = NULL;
	Node* head2 = NULL;
	createll1(head1,5);
	createll1(head1,10);
	createll1(head1,15);
	createll1(head1,40);
	printll1(head1);
	createll2(head2,2);
	createll2(head2,3);
	createll2(head2,20);
	//createll2(head2,60);
	printll2(head2);
	Node* temp = merge2sortedll(head1,head2);
	//printll1(temp);
	int len = getlength(head1);
	cout << "Length of the linked list 1 : " << len << endl;
	int len1 = getlength(head2);
	cout << "Length of the linked list 2 : " << len1 << endl;
}