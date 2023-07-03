#include<bits/stdc++.h>
#define oo INT_MAX
using namespace std;
const int N=1e3+4;
int n,m,s,t,a[N][N],d[N],Tr[N],ch[N];
void DTra(int s, int t)
{
    int u,v;
    long long mind=oo;
    for(int i=1;i<=n;i++){
        d[i]=oo;
        ch[i]=0;
    }
    d[s]=0;
    for(int i=1;i<=n;i++)
    {
        mind=oo;
        for( int j=1;j<=n;j++)
            if( d[j]< mind&&ch[i]==0)
            {
            mind= d[j];
            u=j;
            }
        ch[u]=1;
        if (ch[t]==1) return;
        for(v=1;v<=n;v++)
            if(a[u][v]>0 && ch[v]==0)
                if(d[v]>d[u]+a[u][v])
                {
                    d[v]=d[u]+a[u][v];
                    Tr[v]=u;
                }
    }
}
void path(int s,int t)
{
    stack<int>p;
    do{
        p.push(t);
        t=Tr[t];
    }
    while(t!=s);
    p.push(s);
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
}
main()
{
    freopen("test.inp","r",stdin);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        a[x][y]=a[y][x]=z;
    }
    cin>>s>>t;
    DTra(s,t);
    cout<<d[t]<<endl;
    path(s,t);
}
