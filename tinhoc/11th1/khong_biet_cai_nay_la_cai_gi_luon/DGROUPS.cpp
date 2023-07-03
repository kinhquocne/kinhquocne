#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a;
    for(int deno=1;deno<=n;deno++)
    {
        for(int nume=0;nume<deno;nume++)
        {
            if(__gcd(nume,deno)==1)
            {
                a.push_back({nume,deno});
            }
        }
    }
    a.push_back({1,1});
    for(int i=0;i<a.size()-1;i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i].first * a[j].second > a[j].first * a[i].second)
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i].first<<"/"<<a[i].second<<endl;
    }
}
