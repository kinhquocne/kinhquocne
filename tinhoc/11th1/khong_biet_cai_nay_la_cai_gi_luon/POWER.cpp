#include<bits/stdc++.h>
using namespace std;
long long a,n,m;
long long Power(long long x, long long n, long long m)
{
    if (n == 0) return 1;
    long long t = Power(x, n / 2,m);
    return n % 2 == 0 ? t * t % m : t * t % m * x % m;
}

int main(){
    //freopen("POWER.inp","r",stdin);
    //freopen("POWER.out","w",stdout);
    cin>>a>>n>>m;
    cout<<Power(a,n,m);
}
