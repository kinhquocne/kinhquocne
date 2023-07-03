#include<bits/stdc++.h>
using namespace std;
struct quoc
{
    int a,b;
};
bool cmp(const quoc x,const quoc y)
{
    return x.a < y.a;
}
quoc s[1000005];
int n,res;
main()
{
//    freopen("DOPHU.INP","r",stdin);
//    freopen("DOPHU.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>s[i].a;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        s[i].b=s[i].a+t;
    }
    sort(s+1,s+1+n,cmp);
    int c=s[1].b;
    res=s[1].b-s[1].a;
    for(int i=2;i<=n;i++)
    {
        if(s[i].b>c)
        {
            if(s[i].a>c)res+=s[i].b-s[i].a;
            else res+=s[i].b-c;
            c=s[i].b;
        }
    }
    cout<<res;
}
//3
//1 -1 -5
//2 3 10
