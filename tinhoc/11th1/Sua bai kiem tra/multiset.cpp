#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
multiset<int>a;
multiset<int> :: iterator i;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    for(i=a.begin();i!=a.end();i++)
        sum+=*i;
    cout<<sum<<" "<<*min_element(a.begin(),a.end())<<" "<<*max_element(a.begin(),a.end());
}
