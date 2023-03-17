//Program to check whether the given number is prime or not
#include <iostream>
using namespace std;
 int main()
 {
    int n,i,count;
    cout<<"Enter n";
    cin>>n;
    i = 2;
    count = 0;
    while (i<n)
    {
        if (n%i == 0)
        {
            count = count + 1;
        }
        i = i + 1;
    }
    if (count == 0)
    {
        cout << "n is prime number";
    }
    else
    {
        cout << "n is not a prime number";
    }
 }