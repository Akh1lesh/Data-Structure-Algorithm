#include<iostream>
using namespace std;
int length(char s[])
{
	int count = 0;
	for(int i=0; s[i]!='\0';i++)
	{
		count = count + 1;
	}
	return count;
}

char toLowercase(char ch)
{
	if(ch>='a' && ch<='z')
	{
		return ch;
	}
	else
	{
		ch = ch - 'A' + 'a';
		return ch;
	}
}

bool isPalindrome(char s[])
{
	int	n = length(s);
	int start = 0;
	int end = n - 1;
	while(start<=end)
	{
		if(toLowercase(s[start])!=toLowercase(s[end]))
		{
			return 0;	
		}
		else
		{
			start = start + 1;
			end = end - 1;
		}
	}
	return 1;
}

int main()
{
	char s[20];
	cout << "Enter the string" << "\n";
	cin >> s;
	cout << isPalindrome(s) << "\n";
}