#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
vector<int>a;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<" "<<*min_element(a.begin(),a.end())<<" "<<*max_element(a.begin(),a.end());
}
