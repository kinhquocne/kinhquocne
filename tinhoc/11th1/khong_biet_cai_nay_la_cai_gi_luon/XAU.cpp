#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("inp.txt","r",stdin);
    string s;
    getline( cin, s);
    int m;
    for(cin>>m; m > 0;--m)
    {
        int a,b;
        char c,d;
        cin>> a>> b>> c>> d;
        for(int i=a; i<=b; ++i)
        {
            if(s[i] == c) s[i] = d;
        }
    }
    cout<<s;
}
