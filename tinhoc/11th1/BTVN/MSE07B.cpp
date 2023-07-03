#include<bits/stdc++.h>
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;
set<ii> s;
set<ii> :: iterator it;
main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        if(t==1)
        {
            int k,p;
            cin>>k>>p;
            s.insert({p,k});
        }
        if(t==2)
            if(!s.empty())
            {
                it=s.end();
                --it;
                cout<<it->se<<'\n';
                s.erase(it);
            }
            else cout<<0<<'\n';
        if(t==3)
            if(!s.empty())
            {
                it=s.begin();
                cout<<it->se<<'\n';
                s.erase(it);
            }
            else cout<<0<<'\n';
        cin>>t;
    }
}
