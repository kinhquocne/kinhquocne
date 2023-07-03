#include<bits/stdc++.h>
using namespace std;
long long n,a[25],x[100],res,m,s[100005];
map<long long,long long>b;
void xuli()
{
    int quoc=0;
    for(int i=1;i<=n;i++)
        quoc+=a[i]*x[i];
    b[quoc]=1;
}
void atm (int k)
{
    for(int i=0;i<=1;i++)
    {
        x[k]=i;
        if(k==n)
            xuli();
        else atm(k+1);
    }
}
main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    atm(1);
    for(int i=1;i<=m;i++)
    {
        cin>>s[i];
        if(b[s[i]]==1)res++;
    }
    cout<<res;
}
