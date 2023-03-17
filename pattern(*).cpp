//Program for operators
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    a = 4;
    b = 6;
    cout << " Answer for (a and b)  " << (a&b) << "\n";
    cout << "Answer for (a or b)  " <<(a|b) << "\n";
    cout << "Answer for (not a)  " << (~a) << "\n";
    cout << "Answer for (a xor b)  " << (a^b) << "\n"; 

    //leftshift and rightshift operator

    cout << "Right shift 17 by 1  " << (17 >> 1) << "\n";
    cout << "Right shift 17 by 2  " << (17 >> 2) << "\n";
    cout << "Left shift 19 by 1  " << (19 << 1) << "\n";
    cout << "Left shift 21 by 2  " << (21 << 2) << "\n";
    
    // increment and decrement
    int i = 7;
    cout << "Pre-increment of i  " << ++i << "\n";
    cout << "Post-increment of i  " << i++ << "\n";
    cout << "Pre-decrement of i  " << i-- << "\n";
    cout << "Post-decrement of i  " << --i << "\n";

 }
 