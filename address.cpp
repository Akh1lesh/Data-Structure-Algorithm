#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter any number" << endl;
	cin >> num;

	cout << "Given number is : " << num << endl;
	cout << "Address of the given number is :  " << &num << endl;
	int *p = &num;
	cout << "Address of num is:"<< p << endl;
	cout << "Value of num is :" << *p << endl;

	double d = 4.3;
	double *ptr = &d;

	cout << "Address of d is: " << ptr << endl;
	cout << "Value of d is :" << d << endl;
	cout << "Value of d is by pointer :" << *ptr << endl;
	cout << "Size of num is : " << sizeof(num) << endl;
	cout << "Size of num by pointer is :" << sizeof(*p) << endl;
	cout << "Size of address of num is:" << sizeof(p) << endl; 
	cout << "Size of address of d is : " << sizeof(ptr) << endl;

	cout << "SECOND EXAMPLE" <<endl;
	int i = 5;
	int *q = 0;
	q = &i;
	cout << "Value of i is:" << *q << endl;
	cout << "Address of i is: " << q << endl;

	cout << "THIRD EXAMPLE " <<endl;
	int num1 = 5;
	int *a = &num1;
	cout << "Before " << num1 << endl;
	(*a)++;
	cout << "After " << num1 << endl;

	cout << "Fourth Example" << endl;
	int *r = a;
	cout << a << "-" << r << endl;
	cout << *r << "-" << *a << endl;

	cout << "FIFTH EXAMPLE" << endl;
	int w = 3;
	int *t = &w;
	cout << *t << endl;
 	int *y = t;
	cout << "Before " << t << " " << *t << endl;
	t = t + 1;
	cout << "After " << t << " " << *t << endl;
	cout << (*y) << " - " << (*t) << endl;
	cout << "Difference" << ((*y)-(*t)) << endl; 
}