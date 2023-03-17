#include<iostream>
using namespace std;

class Stack
{
public:
	int top;
	int *arr;
	int size;

	Stack(int size)
	{
		this->size = size;
		arr = new int[size];
		top = -1;
	}

	void push(int element)
	{
		if(top<(size-1))
		{
			top++;
			arr[top] = element; 
		}
		else
		{
			cout << "Stack overfllow " << endl;
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
			cout << "Stack underflow " << endl;
		}
	}

	int peak()
	{
		if(top>=0)
		{
			return arr[top];
		}
		else
		{
			cout << "Stack is empty " << endl;
			return -1;
		}
	}

	bool isEmpty()
	{
		if(top == -1)
		{
			return true;
		}
		else
		{
			return false; 
		}
	}
};

int main()
{
	Stack st(5);
	st.push(22);
	st.push(43);
	st.push(44);
	st.push(47);
	st.push(52);
	cout << "Top element of the stack is : " << st.peak() << endl;
	//st.push(57);
	st.pop();
	st.push(4);
	cout << "Top element of the stack is : " << st.peak() << endl;
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	cout << st.peak() << endl;
	if(st.isEmpty())
	{
		cout << "Stack is empty " << endl;
	}
	else
	{
		cout << "Stack is not empty " << endl;
	}
}