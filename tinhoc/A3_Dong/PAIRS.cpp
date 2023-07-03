#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("inp.txt","r",stdin);
    long long n;
    while(cin>>n)
    {
        long long res=0;
        for(int i=1;i<=n;i++)
            if(n % i == 0) res++;
        cout<<res<<'\n';
    }
}
