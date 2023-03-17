#include<iostream>
using namespace std;

void update2(int &n)
{
	n++;
}
void update(int n)
{
	n++;
}
int main()
{
	/*int i = 5;
	int &j = i;
	cout << "i" << i << endl;
	cout << "j" << j << endl;
	i++;
	cout << "i++ " << i << endl;
	cout << "j" << j << endl;
	j++;
	cout << "i " << i << endl;
	cout << "j++" << j << endl;*/
	int n = 5;
	cout << "Before " << n << endl;
	update(n);
	cout << "After " << n << endl;
	update2(n);
	cout<< "update2 " << n << endl;

}