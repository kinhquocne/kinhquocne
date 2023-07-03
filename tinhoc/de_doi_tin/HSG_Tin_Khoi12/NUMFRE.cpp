#include<bits/stdc++.h>
using namespace std;
int a,b,d;
int ds(int x)
{
    int t=0;
    while(x!=0)
    {
        t=10*t+x%10;
        x/=10;
    }
    return t;
}
main()
{
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(__gcd(ds(i),i)==1)d++;
    cout<<d;
}
