#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
long long n,m,a[N],res;
main(){
    cin>>n>>m;
    for(int i=1;i<=n;++i)cin>>a[i];
    //sort(a+1,a+1+n);
    if(m==1){
        for(int i=1;i<=n;++i)
            res+=llabs(a[i]);
        cout<<res*2;
    }
}