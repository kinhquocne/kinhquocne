#include<bits/stdc++.h>
using namespace std;
int n,x,res,cnt;
priority_queue<int,vector<int>,greater<int>>a;
main(){
    cin>>n;
    cin>>x;
    a.push(x);
    for(int i=1;i<n;i++){
        cin>>x;
        res+=a.top();
        cnt=a.top();
        a.pop();
        a.push(cnt*2);
        a.push(x);
    }
    cout<<res;
    }
