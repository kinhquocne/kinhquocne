#include<bits/stdc++.h>
using namespace std;
string s;
int res;
int main()
{
    cin>>s;
    s=' '+s;
    for(int i=1;i<=s.size();i++)
    {
        if(s.substr(1,i)==s.substr(i+1,i))
        res=max(res,i);
    }
    cout<<res;
}
