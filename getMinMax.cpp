#include<iostream>
using namespace std;

int getMax(int arr[], int size)
{
	int max = INT8_MIN;
	for(int i=0; i<size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int getMin(int arr[], int size)
{
	int min = INT8_MAX;
	for(int j = 0; j<size; j++)
	{
		if (arr[j] < min)
		{
			min = arr[j];
		}
	}
	return min;
}

int main()
{
	int size;
	cout<<"Enter size of array between 1 to 100"<<"\n";
	cin>>size;
	int arr[5];
	cout << "Enter the values of array" << "\n";
	for(int k = 0; k<size;k++)
		{
			cin>>arr[k];
		}
	cout << "Maximum value is : " << getMax(arr,size) << "\n";
	cout << "Minimum value is : " << getMin(arr,size) << "\n";
}