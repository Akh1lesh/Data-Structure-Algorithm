#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
	int start = 0;
	int end = size - 1;
	int mid = end + (start - end)/2;

	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if (arr[mid]>key)
		{
			end = mid - 1;
		}
		if(arr[mid]<key)
		{
			start = mid + 1;
		}
		mid = end + (start - end)/2;
	}
	return -1;
}
int main()
{
	int arr[6] = {5,7,9,15,18,20};
	int n;
	cout << "Key" << "\n";
	cin >> n;
	cout << "Result" << binarySearch(arr,6,n) << "\n";

}