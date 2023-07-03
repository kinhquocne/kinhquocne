#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
map<int,int> a;
map<int ,int> :: iterator it;
string s;
int cnt,res;

int chuyen( char c)
    {
    return (int)c;
    }
main(){
    //freopen("THONGKE.INP","r",stdin);
   // freopen("THONGKE.OUT","w",stdout);
    cnt=0;res=0;
    getline(cin,s);
    for (int i=0;i<s.size();i++)
    {
        s[i]=toupper(s[i]);
        int x=int(s[i]);
        if (x>64) a[x]=a[x]+1;
    }
    for(it=a.begin();it!=a.end();it++){
        if(it->second>cnt){
            cnt=it->second;
            res=it->first;
        }
    }
    if(res>64)
    {
        char x=chuyen(res);
        cout<<x<<endl;
        cout<<cnt;
    }
    else cout<<0;
}
