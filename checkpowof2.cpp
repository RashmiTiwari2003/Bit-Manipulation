#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    n=n&(n-1);
    if(!n) cout<<"Power of 2";
    else cout<<"Not a power of 2";
}