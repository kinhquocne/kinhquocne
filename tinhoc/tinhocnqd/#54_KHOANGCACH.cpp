#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int xA,xB,yA,yB;
        cin>>xA>>yA>>xB>>yB;
        if((yA>0 && yB>0) ||(yA<0 &&yB<0))
            yB=-yB;
        double AB=sqrt(pow(xA-xB,2)+pow(yA-yB,2));
        cout<<int (AB)<<endl;
    }
}
