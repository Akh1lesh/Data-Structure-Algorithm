#include<iostream>
using namespace std;

int largestRowsum(int arr[3][4])
{
	int a = -1;
	int p = 0;
	int k = -1;
	for(int row=0; row<3; row++)
	{
		int sum = 0;
		for(int col=0; col<4; col++)
		{
			sum = sum + arr[row][col];
		}
		a = max(sum,a);
		//cout << "a" << a << endl;
		//cout << "k" << k << endl;
		if(a!=k)
		{
			k = a;
			p = row;
		}

	}
	cout << "largest Row sum" << " " << a << endl;
	cout << "Row with largest sum is" << " ";
	return p;
}

int main()
{
	int arr[3][4];
	cout << "Enter the elements of 2D array" << endl;

	for(int row=0; row<3; row++)
	{
		for(int col=0; col<4; col++)
		{
			cin >> arr[row][col];
		}
	}

	for(int row=0; row<3; row++)
	{
		for(int col=0; col<4; col++)
		{
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}

	cout << largestRowsum(arr) << endl;
}
