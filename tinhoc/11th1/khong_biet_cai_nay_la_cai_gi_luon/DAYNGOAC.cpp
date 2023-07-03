#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    getline(cin,s);
    int c=0,tmp,mi=1e6;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')++c;
        else --c;
        if(c<mi)
        {
            mi=c;
            tmp=i;

        }
    }
    if(c!=0)cout<<-1;
    else cout<<tmp+1;

}
