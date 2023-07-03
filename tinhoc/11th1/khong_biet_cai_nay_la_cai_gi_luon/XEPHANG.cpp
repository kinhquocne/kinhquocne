#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
stack<long long> kinhquocne;
int h[N],n;
main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    for(int i=1;i<=n;i++){
        while (kinhquocne.size() && h[kinhquocne.top()]<=h[i]){
            kinhquocne.pop();
        }if(kinhquocne.size()){
            cout<<kinhquocne.top()<<" ";
        }
        else cout<<0<< " ";kinhquocne.push(i);
    }
}
