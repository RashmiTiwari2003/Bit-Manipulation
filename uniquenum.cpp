#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[9]={2,9,2,5,6,5,7,7,6};
    int XOR=0;
    for(int i=0;i<9;i++)
    {
        XOR^=ar[i];
    }
    cout<<XOR;
}