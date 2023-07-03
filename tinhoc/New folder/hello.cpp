#include<bits/stdc++.h>
using namespace std;
main()
{
    for(int i=1;i<=36;i++)
    {
        if(2*i+4*(36-i)==0)
            cout<<i<<' '<<36-i<<'\n';
    }
}
