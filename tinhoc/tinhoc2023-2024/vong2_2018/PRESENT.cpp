#include<bits/stdc++.h>
using namespace std;
const long long N = 1e5+5;
long long n,m,res,a[N],b[N];
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if(fopen("PRESENT.INP","r")){
        freopen("PRESENT.INP","r",stdin);
        freopen("PRESENT.OUT","w",stdout);
    }
    cin>>m>>n;
    for(int i=1;i<=m;i++)   cin>>a[i];
    for(int i=1;i<=n;i++)   cin>>b[i];
    sort(a+1,a+1+m);
    sort(b+1,b+1+n);
    /*for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(a[i]>=b[j])res++;
            if(a[i]<=(b[j]*x))res++;
        }
    }*/
    long long i=1,j=1;
    while(i<=m){
        while(a[i]>=b[j]&&j<=n){
            j++;
        }
        res+=j-1;
        i++;
    }
    i=1,j=1;
    while(i<=n){
        while(a[j]*sqrt(2)<=b[i]&&j<=m){
            j++;
        }
        res+=j-1;
        i++;
    }
    cout<<res;
}