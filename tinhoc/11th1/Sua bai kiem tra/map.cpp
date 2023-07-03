//#include<bits/stdc++.h>
//using namespace std;
//int n,sum=0,mi=INT_MAX,ma=0;
//map<int,int>a;
//main()
//{
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//        cin>>a[i];
//    }
//    for(int i=1;i<=n;i++)
//    {
//        sum+=a[i];
//        mi=min(mi,a[i]);
//        ma=max(ma,a[i]);
//    }
//    cout<<sum<<" "<<mi<<" "<<ma;
//}
#include<bits/stdc++.h>
using namespace std;
int n,sum=0,mi=INT_MAX,ma=0;
map<int,int>a;
map<int,int> :: iterator quoc;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[x]++;
    }
    for(quoc=a.begin();quoc!=a.end();quoc++)
    {
        sum+=quoc->first * quoc->second;
        mi=min(mi,quoc->first);
        ma=max(ma,quoc->first);
    }
    cout<<sum<<" "<<mi<<" "<<ma;
}
