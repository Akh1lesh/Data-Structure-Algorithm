#include<iostream>
using namespace std;

void alternateArray(int arr[],int size)
{
	for(int i = 0; i<size; i=i+2)
	{
		if ((i+1)<size)
		{
			swap(arr[i],arr[i+1]);
		}
	}
	for(int j=0; j<size; j++)
	{
		cout << arr[j] << " ";
	}
}

int main()
{
	int arr[5] = {1,5,7,8,4};
	alternateArray(arr,5);
}