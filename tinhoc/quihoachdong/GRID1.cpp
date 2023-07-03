#include<bits/stdc++.h>
using namespace std;
const int N=1e9+7;
int h,w,a[1005][1005];
long long f[1005][1005];
int main()
{
    cin>>h>>w;
    for(int i=1;i<=h;i++)
        for(int j=1;j<=w;j++)
        {
            char c;
            cin>>c;
            a[i][j]=c;
        }

    for(int i=1;i<=h;i++)
        for(int j=1;j<=w;j++)
        {
            if(a[i-1][j]==0 && a[i][j-1]==0)f[i][j]=1;
            if(a[i-1][j]==46 && a[i][j-1]!=46)f[i][j]=f[i-1][j];
            if(a[i-1][j]!=46 && a[i][j-1]==46)f[i][j]=f[i][j-1];
            if(a[i-1][j]==46 && a[i][j-1]==46)f[i][j]=f[i-1][j]+f[i][j-1];
        }
    cout<<f[h][w]%N;
    /*for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
            cout<<f[i][j]<<" ";
        cout<<'\n';
    }*/
}
