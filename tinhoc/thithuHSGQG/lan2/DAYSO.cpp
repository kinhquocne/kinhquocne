#include<bits/stdc++.h>
using namespace std;
int a[1000005],bo[1000005],n;
int main()
{
    cin>>n;
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=i-1;i++)
            bo[2*a[i]-a[j]]=1;
        for(int j=2;j<=n;j++)
            if(bo[j]==0)
            {
                a[i]=j;
                break;
            }
    }
    cout<<a[n];
}
