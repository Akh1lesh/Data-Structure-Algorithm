#include<iostream>
using namespace std;

int factorial(int n)
{
	int fact = 1;
	for(int i = 1;i<=n;i++)
	{
		fact = fact * i;
	}
	return fact;
}

int nCr(int n,int r)
{
	int num = factorial(n);
	int denom = factorial(r) * factorial(n-r);
	int answer = num / denom;
	return answer;
}

int main()
{
	int n,r;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"Enter r"<<endl;
	cin>>r;
	int result = nCr(n,r);
	cout <<"Result is" << result << endl;

}