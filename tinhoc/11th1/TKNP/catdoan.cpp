#include<bits/stdc++.h>
using namespace std;
int k,n,a[100005],res;
main()
{
    cin>>n>>k;
    int ma=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        ma=max(ma,a[i]);
    }
    int l=0,r=ma,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        int cnt=0;
        for(int i=1;i<=n;i++)
            cnt+=a[i]/mid;
        if(cnt>=k)l=mid+1, res=max(res,mid);
        else r=mid-1;
    }
    cout<<res;
}
