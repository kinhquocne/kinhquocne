#include<bits/stdc++.h>
using namespace std;
int x[100],n;
void t()
{
    for(int i=1;i<=n;i++)
        cout<<x[i]<<" ";
    cout<<'\n';
}
void nhiphan(int k)
{
    for(int i=0;i<=1;i++)
    {
        x[k]=i;
        if(k==n)t();
        else nhiphan(k+1);
    }
}
main()
{
    cin>>n;
    nhiphan(1);
}
