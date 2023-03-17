#include<iostream>
using namespace std;

void update(int **p2)
{
	**p2 = **p2 + 1;
}
int main()
{
	int i = 5;
	int *p = &i;
	int **p2 = &p;

	/*
	cout << "Address of i: " << p << endl;
	cout << "Address of p: " << p2 << endl;
	cout << "Address of p : " << *p2 << endl;

	//Printing value of i
	cout << "Value1 of i: " << i << endl;
	cout << "Value2 of i: " << *p << endl;
	cout << "Value3 of i: " << **p2 << endl;

	//Printing address of i
	cout << "Address1 of i: " << &i << endl;
	cout << "Address2 of i: " << p << endl;
	cout << "Address3 of i: " << *p2 << endl;

	//Printing address of p
	cout << "Address1 of p: " << &p << endl;
	cout << "Address2 of p: " << p2 << endl;*/
/*
	cout << "p2 = p2 + 1 " << endl;
	cout << "Before " << i << endl;
	cout << "Before " << p << endl;
	cout << "Before " << p2 << endl;
	update(p2);
	cout << "After " << i << endl;
	cout << "After " << p << endl;
	cout << "After " << p2 << endl;*/
	/*
	cout << "*p2 = *p2 + 1 " << endl;
	cout << "Before " << i << endl;
	cout << "Before " << p << endl;
	cout << "Before " << p2 << endl;
	update(p2);
	cout << "After " << i << endl;
	cout << "After " << p << endl;
	cout << "After " << p2 << endl;*/

	cout << "**p2 = **p2 + 1" << endl;
	cout << "Before " << i << endl;
	cout << "Before " << p << endl;
	cout << "Before " << p2 << endl;
	update(p2);
	cout << "After " << i << endl;
	cout << "After " << p << endl;
	cout << "After " << p2 << endl;




}