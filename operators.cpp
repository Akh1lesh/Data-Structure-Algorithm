//Program for fibonacci series
#include <iostream>
using namespace std;
int main()
{
    int n,i,curr,prev,next;
    cout << "Enter n";
    cin>>n;
    prev=0;
    curr=1;
    cout << prev << "\n";
    cout << curr << "\n";
    i=0;
    while (i<=n)
    {
        next = curr + prev;
        cout << next << "\n";
        prev = curr;
        curr = next;
        //cout << "prev" << prev << "curr" << curr << "\n";
        i=i+1;
    }
}
 