#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000003],b[10000003],res=INT_MAX;
main()
{
    freopen("DOLECH.INP","r",stdin);
    freopen("DOLECH.OUT","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    sort(b+1,b+1+m);
    for(int i=1;i<=n;i++)
    {
        int cnt=lower_bound(b+1,b+1+m,a[i])-b;
        if(cnt!=m+1)res=min(res,abs(b[cnt]-a[i]));
        if(cnt-1!=0)res=min(res,abs(b[cnt-1]-a[i]));
    }
    cout<<res;
}
