#include<bits/stdc++.h>
using namespace std;
int f[100005];
struct d
{
    int x;
    int y;
};
d a[100005];
bool ss (d u,d v)
{
    return u.y < v.x || u.x == v.x && u.y < v.y;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>a[i].x>>a[i].y;
    cout<<'\n';
    //sort(a+1,a+1+n,ss);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;i<=m;j++)
        {
            if(i!=j)
            {
                if(a[i].x==a[j].y) f[i]=max(f[i],f[j]);
            }
        }
    }
    cout<<*max_element(f+1,f+1+m);
}
