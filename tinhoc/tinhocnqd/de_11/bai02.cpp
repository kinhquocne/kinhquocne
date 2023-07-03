#include<bits/stdc++.h>
using namespace std;
const int N=1e6+6;
int n,a[N],nt[N];
bool OK(int x)
{
    while(x!=0)
    {
        if(nt[x]==1)return 0;
        else x/=10;
    }
    return 1;
}
int main()
{
    nt[1]=1;
    for(int i=2;i<=sqrt(N);i++)
        if(nt[i]==0)
            for(int j=i;i*j<=N;j++)
                nt[i*j]=1;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int res=0;
    for(int i=1;i<=n;i++)
        if(OK(a[i]))res++;
    cout<<res;
}
