#include<iostream>
using namespace std;

 int largestColsum(int arr[3][4])
 {
 	int a = -1;
 	int k = -1;
 	int p = 0;
 	for(int col = 0; col<4; col++)
 	{
 		int sum=0;
 		for(int row=0; row<3; row++)
 			{
 				sum = sum + arr[row][col];
 			}
 		a = max(sum,a);
 		if(a!=k)
 		{
 			k = a;
 			p = col;
 		}
 	}
 	cout << "largest Column sum " << a << endl;
 	cout << "Column with largest sum is " << endl;
 	return p;
 }

int main()
{
	int arr[3][4];
	cout << "Enter the elements of the array" << endl;
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

	cout << largestColsum(arr) << endl;
}