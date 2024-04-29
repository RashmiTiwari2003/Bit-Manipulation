#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n>>i;

    int mask=1<<i;
    if(n&mask) cout<<"Bit is Set";
    else cout<<"Bit is not set";
}