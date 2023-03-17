#include<iostream>
using namespace std;

int main()
{
	int count = 0;
	int arr[10] = {5,7,-2,10,22,-2,0,5,22,4};
	for(int i = 0; i<10;i++)
	{
		if (arr[i] == 1)
		{
			count = count + 1;
		}
	}
	if(count == 0)
	{
		cout << "Element is not present" << "\n";
	}
	else
	{
		cout << "Element is present" << "\n";
	}


}