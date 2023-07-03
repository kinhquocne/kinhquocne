#include<bits/stdc++.h>
using namespace std;
int n,a[1005];
void ReadInput()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
}
void Solve()
{
    long long s=1;
    for(int i=1;i<=n;++i)
    {
        if(a[i]<=s)s+=a[i];
        else break;
    }
    cout<<s;
}
int main(){
    freopen("VEDING.inp","r",stdin);
    freopen("VEDING.out","w",stdout);
    ReadInput();
    Solve();
}
