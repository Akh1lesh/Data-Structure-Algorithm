#include<iostream>
using namespace std;

void print(int *p)
{
	cout << *p << endl;
}

void update(int *p)
{
	*p = *p + 1;
	//cout << "Inside : " << p << endl;

	//cout << "Inside value : " << *p << endl;
}

int getSum(int *arr, int n)
{
	cout << sizeof(*arr) << endl;
	int sum = 0;
	for(int i = 0; i<n; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
int main()
{
	/*
	int value = 5;
	int *p = &value;
	//print(p);
	cout << "Before : " << *p << endl;
	update(p);
	cout << "After : " << *p << endl;
	return 0;
	*/

	int arr[5] = {1,2,3,4,5};
	cout << "Sum is : " << getSum(arr+3,2) << endl;
	return 0;

}