#include<bits/stdc++.h>
using namespace std;
struct t
{
    int a,b;
};
t s[1000005];
bool tangdan(const t x,const t y)
{
    return (x.a < y.a || x.a == y.a && x.b >y.b);
}
vector<int>f;
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>s[i].a>>s[i].b;
    sort(s+1,s+1+n,tangdan);
    int dem=1;
    for(int i=1;i<=n;i++)
    {
        int x=lower_bound(f.begin(),f.end(),s[i].b)-f.begin();
        if(x==0)f.insert(f.begin(),s[i].b);
        else f[x-1]=s[i].b;
    }
    cout<<f.size();
}
//1 7
//1 5
//1 4
//2 6
//2 5
//3 4
//7 9
//
//7 5
