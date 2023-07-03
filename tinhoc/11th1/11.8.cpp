#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,x[30];
void in(ll x[])
{
    bool check=true;
    for(int i=1;i<=n;i++)
        if(x[i]=='B' && x[i+1]=='B')
        {
            check=false;
            break;
        }
    if(check==true)
    {
        for(int i=1;i<=n;i++)
            cout<<char(x[i]);
        cout<<'\n';
    }
}
void AB(ll k)
{
    for(int i='A';i<='B';i++)
    {
        x[k]=i;
        if(k==n) in(x);
        else AB(k+1);
    }
}
main()
{
    cin>>n;
    AB(1);
}
