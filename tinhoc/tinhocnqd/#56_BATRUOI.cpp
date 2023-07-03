#include <bits/stdc++.h>
using namespace std;
const int N=1e3+3;
const double eps=0.00000001;
int n,m,ch[N],ans;
double R;
struct point{int x,y;}r[N];
double dist(point a, point b) {
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
main()
{
    cin>>n>>m>>R;
    for (int i=1;i<=n;i++) cin>>r[i].x>>r[i].y;
    for (int i=1;i<=m;i++) {
        int u,v;
        cin>>u>>v;
        point tmp;
        tmp.x=u;tmp.y=v;
        for (int j=1; j<=n; j++) {
            if (dist(tmp, r[j])<R || abs(dist(tmp,r[j])-R)<=eps) {
                if (ch[j]==0) ans++;
                ch[j]=1;
            }
        }
    }
    cout<<ans;
}
