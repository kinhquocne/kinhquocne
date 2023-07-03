#include<bits/stdc++.h>
using namespace std;
int n,sum=0,mi=INT_MAX,ma=0;
queue<int>a;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    while(!a.empty())
    {
        sum+=a.front();
        mi=min(mi,a.front());
        ma=max(ma,a.front());
        a.pop();
    }
    cout<<sum<<" "<<mi<<" "<<ma;
}
