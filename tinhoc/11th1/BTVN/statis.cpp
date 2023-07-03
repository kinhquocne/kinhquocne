#include<bits/stdc++.h>
using namespace std;
int n,m;
map<int,int>a;
vector<pair<int,int>>s;
bool check(pair<int,int> u,pair<int,int> v){
return (u.second>v.second)||(u.second==v.second&&u.first<v.first);
}
main()
{
    cin>>n>>m;
    int ma=0,mi=INT_MAX;
    for(int i=1;i<=n*m;i++)
    {
        int x;
        cin>>x;
        a[x]++;
        ma=max(ma,x);
        mi=min(mi,x);
    }
    for(int i=mi;i<=ma;i++)
    {
        if(a[i]!=0)
        s.push_back({i,a[i]});
    }
    sort(s.begin(),s.end(),check);
    for(int i=0;i<s.size();i++)
        cout<<s[i].first<<':'<<s[i].second<<'\n';
}
