#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    bool check[100000];
    while(t--){
        int n,k,a[100005];
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            check[i]=1;
        }
        sort(a+1,a+1+n,greater<int>());
        for(int i=1;i<=n;i++){
            int l=1,r=n,cnt=-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(a[i]>=a[mid]+k&&check[mid]==1){
                    cnt=mid;
                    r=mid-1;
                }
                else l=mid+1;
            }
            if(cnt!=-1) check[cnt]=0;
        }
        long long res=0LL;
        for(int i=1;i<=n;i++)
            if(check[i]==1)
                res+=a[i];
        cout<<res<<'\n';
    }
}
