#include<bits/stdc++.h>
using namespace std;
int n,sum,mi=INT_MAX,ma;
deque<int>a;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    while(!a.empty())
    {
        sum+=a.front();
        mi=min(mi,a.front());
        ma=max(ma,a.front());
        a.pop_front();
    }
    cout<<sum<<" "<<mi<<" "<<ma;
}
