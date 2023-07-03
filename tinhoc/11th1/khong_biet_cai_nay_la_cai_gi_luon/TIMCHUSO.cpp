#include<bits/stdc++.h>
using namespace std;
using ill = uint64_t;
ill a,b,k;
ill Mul(ill x,ill y)
{
    if(y == 0) return 0;
    ill t = Mul(x,y/2);
    return y % 2 == 0 ? (t + t) % b : (t + t + x) % b;
}
ill Power10(ill n)
{
    if (n == 0) return 1 % b;
    ill t= Power10(n/2);
    return n % 2 == 0 ? Mul(t,t) : Mul(t,t) * 10 % b;
}
int main(){
    freopen("inp.txt","r",stdin);
    ill t;
    for(cin >> t ; t > 0 ;--t){
        cin>>a>>b>>k;
        cout<< Mul(a, Power10(k-1)) * 10 / b<<'\n';
    }
}
