#include<bits/stdc++.h>
using namespace std;
string s,res;
int n;
int main()
{
    //freopen("inp.txt","r",stdin);
    cin>>n;
    s=' '+s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        //if(s[i]>='a' && s[i]<='z')s[i]=s[i]-32;
        //if(s[i-1]==' ')res=res+s[i];
        s[0]-=32;
        cout<<s[0];
    }
    //cout<<res;
}
