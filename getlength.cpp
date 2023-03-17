#include<iostream>
using namespace std;
int getLength(char name[])
{
	int count = 0;
	for(int i = 0; name[i]!='\0';i++)
	{
		count = count + 1;
	}
	return count;
}
int main()
{
	char name[20];
	cout <<"Enter your name" << "\n";
	cin >> name;
	int x = getLength(name);
	cout << x <<"\n";
}