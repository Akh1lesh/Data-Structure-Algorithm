#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter any number" << endl;
	cin  >> n;
	bool flag = false;
	if(n==1)
	{
		flag=true;
	}
	for(int i = 2; i<n; i++)
	{
		if(n%i==0)
		{
			flag = true;
		}
	}
	if(flag == false)
	{
		cout << "Given number is a prime number" << endl;
	}
	else
	{
		cout << "Given number is not a  prime number" << endl;
	}
}