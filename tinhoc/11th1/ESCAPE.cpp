#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
bool bo[N];
long long n,h,a[N],b[N],x[N],res,t;
void xuly()
{
    long long sum=0,dem=0;
//    for(int i=1;i<=n;i++)cout<<a[x[i]]<<' ';
    for(int i=1;i<=n;i++)
    {
        if(b[x[i]]+sum>=h)dem++;
        sum+=a[x[i]];
    }

//    cout<<'\n'<<dem<<'\n';
    res=max(res,dem);
}
void esc(int k)
{
    for(int i=1;i<=n;i++)
    {
        if(!bo[i]){
            x[k]=i;
            bo[i]=1;
            if(k==n) xuly();
            else esc(k+1);
            bo[i]=0;
        }
    }
}
main()
{
    freopen("ESCAPE.INP","r",stdin);
    freopen("ESCAPE.OUT","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>h;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        esc(1);
        cout<<res<<'\n';
        res=0;
    }
}
