#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,k,s;
ll p(ll i,ll n)
{
    if(n==0)return 1;
    ll t=p(i,n/2);
    if(n%2==1)return (t*t*i)%k;
    return (t*t)%k;

}
main()
{
    cin>>n>>k;
    for(ll i=1;i<=n;i++)
        s=( s + (i*p(2LL,i-1))%k )%k;
    cout<<s;
}
