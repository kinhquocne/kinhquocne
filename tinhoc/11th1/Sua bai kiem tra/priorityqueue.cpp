#include<bits/stdc++.h>
using namespace std;
int n,sum=0,mi=INT_MAX,ma;
priority_queue<int>a;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    ma=a.top();
    while(!a.empty())
    {
        sum+=a.top();
        mi=min(mi,a.top());
        a.pop();
    }
    cout<<sum<<" "<<mi<<" "<<ma;
}

