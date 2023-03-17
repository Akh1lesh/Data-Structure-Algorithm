#include<iostream>
using namespace std;

void merge(int arr1[],int arr2[],int arr3[],int n,int m)
{
	int i = 0;
	int j = 0;
	int l = 0;
	while(i<n && j<m)
	{
		if(arr1[i]<=arr2[j])
		{
				arr3[l] = arr1[i];
				i++;
				l++;
		}
		else{
			arr3[l]=arr2[j];
			j++;
			l++;
		}
	}
	if(i<n)
	{
		for(int k = i; k<n; k++)
		{
			arr3[l] = arr1[k];
			l++;
		}
	}
	if(j< m)
	{
		for(int p = j; j<m; j++)
		{
			arr3[l] = arr2[j];
			l++;
		}	
	}
}
int main()
{
	int arr1[7] = {1,4,7,15,20,100,200};
	int arr2[5] = {2,3,7,10,17};
	int arr3[12] = {0};
	merge(arr1,arr2,arr3,7,5);
	for(int q=0; q<12; q++)
	{
		cout << arr3[q] << "\n";
	}
}