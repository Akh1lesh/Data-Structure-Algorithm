//Program for mini calculator
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    char op;
    cout << "Enter the valid operation" << endl;
    cin >> op;
    switch (op)
    {
        case '+': cout << (a+b) << endl;
                break;
        case '-' : cout << (a-b) << endl;
                break;
        case '/': cout << (a/b) << endl;
                break;
        case '%': cout << (a%b) << endl;
                break;
        case '*': cout << (a*b) << endl;
                break;
        default : cout << "Please enter the valid operation";
    }
}

 