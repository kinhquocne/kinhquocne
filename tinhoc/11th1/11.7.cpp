#include<bits/stdc++.h>
using namespace std;
int x[100],n,k,d=0,a[100];
void t()
{
    for(int i=1;i<=k;i++)
        cout<<a[x[i]]<<" ";
    cout<<'\n';
    d++;
}
void tohop(int j)
{
    for(int i=x[j-1]+1;i<=n-k+j;i++)
    {
        x[j]=i;
        if(j==k)t();
        else tohop(j+1);
    }
}
main()
{
    cin>>k>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+1+n);
    tohop(1);
    cout<<d;
}

