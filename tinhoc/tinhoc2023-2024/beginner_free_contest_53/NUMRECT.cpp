#include<bits/stdc++.h>
using namespace std;
long long n,m,t;
long long c(long long k,long long x){
    long long X=1,K=1;
    for(long long i=x-k+1;i<=x;++i) X*=i;
    for(long long i=1;i<=k;++i) K*=i;
    return X/K;
}
main(){
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<c(2,n+1)*c(2,m+1)<<'\n';
    }
}
