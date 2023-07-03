#include<bits/stdc++.h>
using namespace std;
map<int,int>a;
main()
{
    int n,res=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        res=res+a[-x];
        a[x]++;
    }
    cout<<res;
}
