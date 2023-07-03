#include<bits/stdc++.h>
using namespace std;
const int N=1e4+4;
int a[N][N],d[N][N],tr[N][N];
int n,m,s,t;
int INF=INT_MAX;
void docdulieu()
{
    cin>>n>>m;
    int x,y,z;
    for (int i=1;i<=m;i++)
    {
        cin>>x>>y>>z;
        a[x][y]=a[y][x]=z;
    }
    cin>>s>>t;
}
void floyd()
{
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            d[i][i]=0;
            tr[i][j]=-1;
            if (a[i][j]>0) d[i][j]=a[i][j];
            else d[i][j]=INF;
        }
    }
    for (int k=1;k<=n;k++)
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++)
                if (d[i][j]>d[i][k]+d[k][j])
                {
                    d[i][j]=d[i][k]+d[k][j];
                    tr[i][j]=k;
                }
}
void path(int u,int v)
    {
        stack<int>p;
        do{
            p.push(v);
            v=tr[u][v];
        }
        while(v>0);
        p.push(u);
        while(!p.empty())
        {
            cout<<p.top()<<" ";
            p.pop();
        }
    }
main ()
{
    docdulieu();
    floyd();
    cout<<d[s][t]<<endl;
    path(s,t);
}
