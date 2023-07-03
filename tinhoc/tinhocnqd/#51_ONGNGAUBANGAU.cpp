#include<bits/stdc++.h>
using namespace std;
#define ii pair<int,int>
const int N = 1e3+6;
int n,m,s,t;
int tg[3][N],visit[N];
vector<ii> a[N];
void dt(int x,int y)
{
    priority_queue< ii,vector<ii>,greater<ii> >pq;
    int u;
    for(int i=1;i<=n;i++)
        tg[y][i]=INT_MAX;
    tg[y][x]=0;
    pq.push(ii(0,x));
    while(pq.size()!=0)
    {
        int u = pq.top().second;
        int tgu = pq.top().first;
        pq.pop();
        for(auto v : a[u])
            if(tg[y][v.first] > tgu + v.second)
            {
                tg[y][v.first] = tgu + v.second;
                pq.push(ii(tg[y][v.first],v.first));
            }
    }
}
main()
{
    cin>>n>>m>>s>>t;
    for(int i=1;i<=m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        a[x].push_back({y,z});
        a[y].push_back({x,z});
    }
    dt(s,1);
    dt(t,2);
    int cnt=0,mi=INT_MAX,res=0;
    for(int i=1;i<=n;i++)
        if(tg[1][i]==tg[2][i] && mi>tg[1][i]){
                mi=tg[1][i];
                res=i;
        }
    if(res==0)
        cout<<"CRY";
    else cout<<res;
}
