#include<bits/stdc++.h>
using namespace std;
int n,a[30005];
vector<int>b;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        int x=lower_bound(b.begin(),b.end(),a[i])-b.begin();
        if(x<b.size())b[x]=a[i];
        else b.push_back(a[i]);
    }
    cout<<b.size();
}
//8 5 3 7 4 9 8 4 10
