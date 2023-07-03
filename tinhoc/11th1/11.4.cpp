#include<bits/stdc++.h>
using namespace std;
int x[1000],a,n,Bo[1000];
void t()
{
    for(int i=1;i<=a;i++)
        cout<<x[i]<<" ";
    cout<<'\n';
}
void chinhhop(int k)
{
    for(int i=1;i<=n;i++)
    {
        if(Bo[i]==0)
        {
            Bo[i]=1;
            x[k]=i;
            if(k==a) t();
            else chinhhop(k+1);
            Bo[i]=0;
        }
    }
}
main()
{
    cin>>a>>n;
    chinhhop(1);
}

