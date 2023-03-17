#include<iostream>
using namespace std;
void rowSum(int arr[3][4])
{
	for(int row=0; row<3; row++)
	{
		int sum = 0;
		for(int col=0; col<4; col++)
		{
			sum = sum + arr[row][col];
		}
		cout << sum << endl;
	}
}

int main()
{
	cout << "Enter the elements of 2D array" << endl;
	int arr[3][4];
	for(int row=0; row<3; row++)
	{
		for(int col=0; col<4; col++)
		{
			cin >> arr[row][col];
		}
	}

	for(int row=0; row<3; row++)
	{
		for(int col = 0; col<4; col++)
		{
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}
	rowSum(arr);
}