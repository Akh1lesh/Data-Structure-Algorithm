//Program for binary to decimal
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,ans=0,i=0;
    cout << "Enter binary number";
    cin>>n;
    while (n!=0)
    {
        int digit = n%10;
        if (digit == 1)
        {
            ans = pow(2,i) + ans;
        }
        i = i + 1;
        n=n/10;
    }
    cout << ans;
}

 