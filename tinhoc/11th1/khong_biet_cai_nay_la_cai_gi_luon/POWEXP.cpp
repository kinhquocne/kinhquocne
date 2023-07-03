#include<bits/stdc++.h>
#define ull uint64_t
using namespace std;
ull a,b,m;
ull Mul(ull x, ull y )
{
    if(y == 0) return 0;
    ull t= y/2;
    return t % 2 == 0 ? (t + t) *x : (t + t + 1)* x;
}
ull Power(ull x, ull n)
{
    if(n==0)return 1;
    ull t=Power(x,n/2);
    return n % 2 == 0 ? t * t : t * t *x;
}
int main(){
    freopen("POWEXP.inp","r",stdin);
    //freopen("POWEXP.out","w",stdout);
    cin>>a>>b>>m;
    cout<< Mul(Power(a,b), Power(b,a)) % m;
}
