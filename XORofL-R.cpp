#include <bits/stdc++.h>
using namespace std;

int findXOR(int x)
{
    int mod=x%4;

    if(mod==1) return 1;
    else if(mod==2) return x+1;
    else if(mod==3) return 0;
    else if(mod==0) return x;
}

int main()
{
    int l,r;
    cin>>l>>r;

    int XOR=findXOR(r)^findXOR(l-1);
    cout<<"XOR is: "<<XOR;
}