#include<iostream>
#include<stack>
using namespace std;

int main()
{
	//creation of stack
	stack <int> s;

	//push operation in stack
	s.push(2);
	s.push(30);

	//pop operation in stack
	s.pop();

	//top element in stack
	cout << "Top element in stack : " << s.top() << endl;

	//empty operation in stack
	if(s.empty())
	{
		cout << "Stack is empty " << endl;
	}
	else
	{
		cout << "Stack is not empty " << endl;  
	}

	cout << "Size of stack is " << s.size() << endl;
}