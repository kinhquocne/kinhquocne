#include<bits/stdc++.h>
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;
multiset<ii> s;
multiset<ii>::iterator it;
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        s.insert({a,2});
    }
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        s.insert({a,1});
    }
    int cnt=0,res=0,b,e;
    bool kt;
    for(it=s.begin();it!=s.end();it++)
    {
        if(it->se==2)
        {
            cnt++;
            if(cnt>res)
            {
                b=it->fi;
                res=cnt;
                kt=1;
            }
        }
        if(it->se==1)
        {
            cnt--;
            if(kt==1)
            {
                kt=0;
                e=it->fi;
            }
        }
    }
    cout<<res<<'\n'<<b<<" "<<e;
}

