#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
long long n,a[N],b[N];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>b[i];
    a[1]=b[1];
    for(int i=2;i<=n;i++)
        a[i]=b[i]*i;
    for(int i=1;i<=n;i++)
        cout<<a[i]-a[i-1]<<' ';

}
