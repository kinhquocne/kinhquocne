#include<bits/stdc++.h>
using namespace std;
int n,k,a[500005],f[500005];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=min(n,k);i++)
    {
        f[i]=a[i];
    }
    for(int i=k+1;i<=n+1;i++)
    {
        f[i]=1e9;
        for(int j=1;j<=k;j++)
            f[i]=min( f[i],f[i-j]+a[i]);
    }
    //cout<<f[n+1];
    for(int i=1;i<=n+1;i++)cout<<f[i]<<'\n';
}
