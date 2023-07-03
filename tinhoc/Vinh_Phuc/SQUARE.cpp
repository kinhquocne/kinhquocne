#include<bits/stdc++.h>
using namespace std;
main()
{
    int dma=0,rma=0,dmi=INT_MAX,rmi=INT_MAX,n,res;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        dmi=min(dmi,x);
        dma=max(dma,x);
        rmi=min(rmi,y);
        rma=max(rma,y);
    }
    res=max(dma-dmi,rma-rmi);
    cout<<res*res;
}
