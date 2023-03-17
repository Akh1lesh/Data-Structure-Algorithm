#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	int arr[] = {10,20,100,40,50,500,8};
	int p = sizeof(arr);
	int q = sizeof(arr[0]);
	cout << p << " " << q <<endl;
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << size << endl;
	for(int j=0;j<size;j++)
	{
		cout << arr[j] << " ";
	}cout << endl;
	for(int i=0; i<(size-1); i++)
	{
		a = arr[i];
		b = arr[i+1];
		cout << a << " " << b << " " << i << endl;

		if(a>b)
		{
			c = a;
		}
		else
		{
			c = b;
		}
	}
	cout << c << endl;
}