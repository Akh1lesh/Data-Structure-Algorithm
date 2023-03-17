#include<iostream>
using namespace std;

void colSum(int arr[3][4])
{
	for(int col=0; col<4; col++)
	{
		int sum = 0;
		for(int row = 0; row<3; row++)
		{
			sum = sum + arr[row][col];
		}
		cout << sum << endl;
	}
}

int main()
{
	int arr[3][4];
	cout << "Enter the elements of the 2D array" << endl;

	//Taking input of elements of the array
	for(int row=0; row<3; row++)
	{
		for(int col=0; col<4; col++)
		{
			cin >> arr[row][col];
		}
	}

	//Printing 2D array

	for(int row=0; row<3; row++)
	{
		for(int col=0; col<4; col++)
		{
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}

	colSum(arr);
}