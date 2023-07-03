#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
set<int>a;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        a.insert(x);
    }
    cout<<sum<<" "<<*min_element(a.begin(),a.end())<<" "<<*max_element(a.begin(),a.end());
}

