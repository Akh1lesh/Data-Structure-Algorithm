#include<iostream>
#include<stack>
#include<vector>
using namespace std;

stack<int> getMiddleElement(stack<int> s)
{
	vector<int> a;
	int size = s.size();
	for(int i = 0; i<size; i++)
	{
		//cout << s.top() << "i" << i << endl;
		a.push_back(s.top());
		s.pop();
	}

	int middle = size/2;
	cout << "middle" << middle << endl;
	cout << "Size of array " << a.size() << endl;
	stack<int> q;
	if(size%2 == 0)
	{
		for(int j=0; j<a.size(); j++)
		{
			cout << a[j] << a[middle] << endl;
 			if(a[j]!=a[middle])
			{
				q.push(a[j]);
			}
		}
	}

	if(size%2!=0)
	{
		for(int j=0; j<a.size(); j++)
		{
			if(a[j]!=a[middle])
			{
				q.push(a[j]);
			}
		}	
	}
	return q;
}

int main()
{
	stack<int> s;
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	cout << "Size of stack is " << s.size() << endl;
	stack<int> middle = getMiddleElement(s);
	cout << "Size of middle stack is : " << middle.size() << endl;
	int len = middle.size();
	for(int i=0; i<len; i++)
	{
		int a = middle.top();
		cout << a << " ";
		middle.pop();
	}cout << endl;
}