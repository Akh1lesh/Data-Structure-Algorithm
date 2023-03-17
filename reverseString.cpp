#include#iostream>
using namespace std;

class Stack
{
public:
	int top;
	int size;
	char *arr;

	Stack(int size)
	{
		this->size = size;
		arr = new int[size];
		top = -1;
	}

	void push(char element)
	{
		if(top < (size - 1))
		{
			arr[top] = element;
			top++;
		}
		else
		{
			cout << "Stack overflow " << endl;
		}
	}

	char pop()
	{
		if(top>=0)
		{
			char ans = arr[top];
			top--;
			return ans;
		}
		else
		{
			cout << "Stack underflow " << endl;
		}
	}

	bool isEmpty()
	{
		if(top == -1)
		{
			cout << "Stack is Empty" << endl;
		}
		else
		{
			cout << "Stack is not Empty" << endl;
		}
	}

	char peak()
	{
		if(top>=0)
		{
			return arr[top];
		}
		else
		{
			cout << "Stack is Empty" << endl;
		}
	}

};

int main()
{
	char ch = "abcde";
	int len = 5;
	Stack s(5);
	for(int i=0; i<len; i++)
	{
		s.push(ch[i]);
	}
	for(int j=0; j<len;j++)
	{
		char a = s.pop();
		cout << a << " ";
	}
}