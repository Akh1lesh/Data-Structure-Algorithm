#include<iostream>
using namespace std;

bool search2Darray(int x, int arr[3][4])
{
	for(int row=0; row<3; row++)
	{
		for(int col=0; col<4; col++)
		{
			if(arr[row][col] == x)
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	cout << "Enter the elements of 2D array"<<endl;
	int arr[3][4];
	for(int row = 0; row<3; row++)
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
	int x;
	cin >> x;

	if(search2Darray(x,arr))
	{
		cout << "Element is present" << endl;
	}
	else
	{
		cout << "Elemen is not present" << endl;
	}
}