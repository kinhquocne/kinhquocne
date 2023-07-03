#include<bits/stdc++.h>
using namespace std;
int n,m;
map<int,int>a;
main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<=m;i++)
    {
        int x;
        cin>>x;
        cout<<a[x]<<'\n';
    }
}
