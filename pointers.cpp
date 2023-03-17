#include<iostream>
using namespace std;

int main()
{
	/*
	int arr[10] = {2,5,6};
	cout << "address of first memory block is :" << arr << endl;
	cout << arr[0] << endl;
	cout << "Address of first memory block by & is: " << &arr[0] << endl;
	cout << "Value at the address arr[0]: " << *arr << endl;
	cout << "Increment the value at arr[0]: " << *arr + 1 << endl;
	cout << "Address of the arr[0] block: " << arr << endl;
	cout << "Address of the arr[1] block: " << arr+1 << endl;
	cout << "Value at first location: " << *(arr + 1) << endl;
	cout << "Value at first location :" << (*arr)+1 << endl;

	cout << "3rd value " << endl;
	cout << "Value at 3rd place : " << arr[2] << endl;
	cout << "Value at 3rd place by pointer: " << *(arr+2) << endl;

	int i = 2;
	cout << "Value at 3rd place : "  << i[arr] << endl;

	cout << "Size of arr[10]: " << sizeof(arr) << endl;*/
	/*
	int temp[10];
	cout << "Size of the array : " << sizeof(temp) << endl;
	int *ptr = &temp[0];
	cout << "Size of the address of the array : " << sizeof(ptr) << endl;
	cout << "Size of the element temp[0]: " << sizeof(*ptr) << endl;
	cout << "Size of the pointer : " << sizeof(&ptr) << endl;
	temp = temp + 1;
	cout << "->" << temp << endl;*/
	/*
	int arr[10];
	int *ptr = &arr[0];
	cout << ptr << endl;
	ptr = ptr + 1;
	cout << ptr << endl;*/

	int  arr[5] = {1,2,3,4,5};
	char ch[6] = "abcde";
	cout << "Array: " << arr << endl;
	cout << "Charachter: " << ch << endl;


} 