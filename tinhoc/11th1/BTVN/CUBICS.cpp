#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,u=0,v=0,f[100005];
    map<int,int>m;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        f[i]=f[i-1]+x-k;
    }
    for(int i=1;i<=n;i++){
        if(m[f[i]]==0)m[f[i]]=i;
        else{
            if(v<i-m[f[i]]){
                u=m[f[i]]+1;
                v=i-m[f[i]];
            }
        }
    }
    cout<<v<<'\n'<<u;
}
//intput:
//n k
//a[1] a[2] ... a[n]
//output:
//v u (độ dài tìm đc và vị trí đầu tiên)
//0 (trường hợp không tìm thấy)

//9 8
//4 5 6 7 9 10 12 15 20
//4 3

//6 27
//14 17 30 34 39 48
//3 2
