//Program to check whether the given number is prime or not
#include <iostream>
using namespace std;
 int main()
 {
    int row,col,i,j;
    cout<<"Enter number of row";
    cin>>row;
    cout<<"Enter number of col";
    cin>>col;
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            cout << '*';
        }
        cout<<"\n";
    }
 }