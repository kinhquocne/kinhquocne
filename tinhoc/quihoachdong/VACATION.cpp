#include<bits/stdc++.h>
using namespace std;
long long a,b,c,aa[100004],bb[100004],cc[100004],n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        aa[i]=max( a + bb[i-1], a + cc[i-1] );
        bb[i]=max( b + aa[i-1], b + cc[i-1] );
        cc[i]=max( c + bb[i-1], c + aa[i-1] );
    }
    cout<<max( max(aa[n], bb[n]),cc[n]);
}
