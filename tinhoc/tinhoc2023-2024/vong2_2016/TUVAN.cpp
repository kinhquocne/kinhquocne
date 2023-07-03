#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
const long long M = 1e18+5;
long long n,m,a[N],res;
long long check(long long x){
    long long f=0;
    for(int i=1;i<=n;i++){
        f+=x/a[i];
    }
    return f;
}
main()
{
    freopen("TUVAN.INP","r",stdin);
    freopen("TUVAN.OUT","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    long long L = 1, R = M;
    while(L<=R)
    {
        long long mid = (L+R)/2;
        cout<<L<<" "<<R<<" "<<mid<<" "<<check(mid)<<endl;
        if(check(mid)>=m)R=mid-1,res=mid;
        else if(check(mid)<m)L=mid+1;
    }
    cout<<res;
}