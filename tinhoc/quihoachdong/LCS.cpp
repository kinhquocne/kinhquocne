#include<bits/stdc++.h>
using namespace std;
string s,t,tmp;
int res[3003][3003],n,m;
int main()
{
    getline(cin,s);
    getline(cin,t);
    n=s.size();
    m=t.size();
    s=" "+s;
    t=" "+t;
    res[0][0]=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if(s[i]==t[j])
            {
                res[i][j]=res[i-1][j-1]+1;

            }
            else res[i][j]=max(res[i][j-1],res[i-1][j]);
        }
    int i=n;
    int j=m;
    while(res[i][j]!=0)
    {
        if(s[i]==t[j])
        {
            tmp=s[i]+tmp;
            i--;
            j--;
        }
        else{
            if(res[i-1][j]>=res[i][j-1]) i--;
            else j--;
        }
    }
    cout<<tmp;
}
