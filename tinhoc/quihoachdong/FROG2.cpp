#include<bits/stdc++.h>
using namespace std;
int n,k,h[100005],f[100005];
int main()
{
    //freopen("inp1.txt","r",stdin);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>h[i];
    }
    for(int i=2;i<=min(n,k);i++)
    {
            f[i]=1e9;
            for(int j=1;j<i;j++)
            {
                f[i]=min( f[i], f[j]+ abs(h[j]-h[i]) );
            }
    }
    for(int i=k+1;i<=n;i++)
    {
        f[i]=1e9;
        for(int j=1;j<=k;j++)
            f[i]=min( f[i], f[i-j]+ abs(h[i-j]-h[i]) );
    }
    cout<<f[n];
}
