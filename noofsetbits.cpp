#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;

    while(n!=0){
        if(n&1==1) c++;
        n=n>>1;
    }
    cout<<c;
    return 0;
}