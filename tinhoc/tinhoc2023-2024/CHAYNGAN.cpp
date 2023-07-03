#include<bits/stdc++.h>
using namespace std;
const int N = 1e4+5;
int n,a[N],b[N],res;
main()
{
    freopen("CHAYNGAN.INP","r",stdin);
    freopen("CHAYNGAN.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+n);
    int j=1;
    b[n+1]=INT_MAX;
    for(int i=1;i<=n;i++){
        while(a[i]>=b[j]){
            j++;
        }
        if(j>n)break;
        res++;
        j++;
    }
    cout<<res;
}