#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
using ll= long long;
ll n;
ll POWER(ll a, ll n){
    if(n==0)return 1;
    ll tam= POWER(a,n/2)%mod;
    if(n%2==0)return (tam*tam)%mod;
    return (tam*tam*a)%mod;
}
main()
{
    cin>>n;
    cout<<POWER(ll(2),n);
}
