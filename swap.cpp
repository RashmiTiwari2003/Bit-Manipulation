#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=5,b=7;

    a^=b;
    b^=a;
    a^=b;

    cout<<"a: "<<a<<", b: "<<b;
}