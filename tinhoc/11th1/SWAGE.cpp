#include<bits/stdc++.h>
using namespace std;
const double Eps=1e-6;
struct point{ double x,y;}p[2005];
void Ext(point A,point B,double &a,double &b,double &c)
{
    a=B.y-A.y;
    b=A.x-B.x;
    c=-A.x*(B.y-A.y)+A.y*(B.x-A.x);
}
int n,res;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>p[i].x>>p[i].y;
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
        {
            double a,b,c;
            Ext(p[i],p[j],a,b,c);
            int d=0;
            for(int z=1;z<=n;z++)
                if(a*p[z].x+b*p[z].y+c == 0)d++;
            res=max(res,d);
        }
    cout<<res;
}
