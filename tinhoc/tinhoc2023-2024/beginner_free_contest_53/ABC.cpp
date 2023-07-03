#include<bits/stdc++.h>
using namespace std;
int n,res;
int solve(int x){
    if(x==1)return 1;
    else{
        int tmp=0;
        for(int i=1;i<=int(sqrt(x));++i)
            if(x%i==0) tmp++;
        tmp*=2;
        if(int(sqrt(x))*int(sqrt(x))==x)tmp--;
        return tmp;
    }
}
main(){
    cin>>n;
    for(int i=1;i<n;++i)
    {
        res+=solve(i);
    }
    cout<<res;
}
