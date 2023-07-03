#include<bits/stdc++.h>
using namespace std;
unsigned long long n,ma=0,mi=INT_MAX,lcm,a,b;
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    if(fopen("PAIRLCM.INP","r")){
        freopen("PAIRLCM.INP","r",stdin);
        freopen("PAIRLCM.OUT","w",stdout);
    }
    cin >> n;
    if(n%2==0){
        mi=n/2;
        if((n/2)%2==0){
            ma=max( ((n/2)-1) * (n-(n/2)+1),__gcd(((n/2)-1), (n-(n/2)+1)) );
        }
        else if((n/2)%2!=0){
            ma=max( ((n/2)-2) * (n-(n/2)+2),__gcd(((n/2)-2), (n-(n/2)+2)) );
        }
    }
    else if(n%2!=0){
        for(a = 1; a <= n/2; ++a){
            lcm=(a*(n-a))/__gcd(a,(n-a));
            ma=max(ma,lcm);
            mi=min(mi,lcm);
            cout<<a<<" "<<n-a<<" "<<lcm<<'\n';
        }
    }
    cout<<mi<<" "<<ma;
}