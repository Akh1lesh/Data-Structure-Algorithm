#include<iostream>
using namespace std;

int arraySum(int arr[],int size)
{
	int sum = 0;
	for( int j = 0; j<size; j++)
	{
		sum = sum + arr[j];
	}
	return sum;
}

int main()
{
	int size;
	cout << "Enter the size of an array" << "\n";
	cin >> size;

	int arr[5];
	cout << "Enter the elements of an array" << "\n";
	for(int i = 0; i<size; i++)
	{
		cin >> arr[i];
	}
	cout << "Sum of array is : " << arraySum(arr,size) << "\n";



}