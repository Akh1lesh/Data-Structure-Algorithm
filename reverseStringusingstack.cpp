#include<iostream>
#include<stack>
using namespace std;

int getLength(string ch)
{
	int i=0;
	int len = 0;
	while(ch[i]!='\0')
	{
		len++;
		i++;
	}
	return len;
}
int main()
{
	string ch = "akhilesh";
	stack <char> s;
	int len = getLength(ch);
	cout << "Given String is : " << ch << endl;
	cout << "Length of the given string is : " << len << endl;
	for(int i=0; i<len; i++)
	{
		s.push(ch[i]);
	}
	
	string ans = "";
	for(int j = 0; j<len; j++)
	{
		char a = s.top();
		ans.push_back(a);
		s.pop();
	}
	cout << "Reverse of the given string :  " << ans << endl;
}

