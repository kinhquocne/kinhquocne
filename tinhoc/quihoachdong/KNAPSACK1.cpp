#include<bits/stdc++.h>
using namespace std;
long long N,W,w[105],v[105],f[105][100005];
int main()
{
    cin>>N>>W;
    for(int i=1;i<=N;i++)
    {
        cin>>w[i]>>v[i];
    }
    for(int i=1;i<=N;i++)
        for(int j = 1; j <= W ; j++)
            if( w[i] <= j ) f[i][j] = max( f[i-1][j], v[i] + f[i-1][j-w[i]]);
            else f[i][j] = f[i-1][j];
    cout<<f[N][W];
}
