#include<bits/stdc++.h>
using namespace std;
vector<int>a[1001];
int t,check[1001];
void BFS(int x)
{
    queue<int>q;
    check[x]=1;
    q.push(x);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v : a[u])
        {
            if(!check[v])
            {
                check[v]=check[u]+1;
                q.push(v);
            }
        }
    }
}
main()
{
    cin>>t;
    while(t--)
    {

        int x,y,n,m;
        cin>>n>>m;
        for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        BFS(1);
        cout<<check[n]-1<<'\n';
    }

}
