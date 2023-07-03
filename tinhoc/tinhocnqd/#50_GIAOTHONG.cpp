#include<bits/stdc++.h>
using namespace std;
const int N = INT_MAX;
int n,m,a[5000][5000],d[5000],ch[5000];
void dt()
{
    int u;
    for(int i=1;i<=n;i++)
        d[i]=N;
    d[1]=0;
    while(ch[n]==0)
    {
        int mi=N;
        for(int j=1;j<=n;j++)
            if(d[j]<mi && ch[j]==0){
                mi=d[j];
                u=j;
            }
        ch[u]=1;
        if(ch[n]==1)return;
        for(int v=1;v<=n;v++)
            if(a[u][v]>0 && ch[v]==0)
                if(d[v]> d[u]+a[u][v])
                   d[v]=d[u]+a[u][v];
    }
}
main()
{
    cin>>n>>m;
    for(int i=1;i<=m;+i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        a[x][y]=a[y][x]=z;
    }
    dt();
    for(int i=1;i<=n;i++)
    cout<<d[i]<<" ";
}
