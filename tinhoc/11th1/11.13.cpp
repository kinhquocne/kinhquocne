#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
const ll mod=1e9+7;
ll a,n;
ll Po(ll i,ll n)
{
    if(n==0)return 1;
    ll t=Po(i,n/2);
    if(n%2==1)return (t*t*i)%mod;
    return (t*t)%mod;
}
main()
{
    cin>>a>>n;
    cout<<( (Po(a,n+1)-1) * Po(a-1,mod-2) )% mod;
}
