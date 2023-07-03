#include<bits/stdc++.h>
using namespace std;
long long Ax,Ay,Bx,By,Cx,Cy;
main(){

    cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
    long long int k=(Bx-Ax)*(Cy-By)-(By-Ay)*(Cx-Bx);
    if(k==0) cout<<"TOWARDS";
    else if(k<0) cout<<"RIGHT";
    else if(k>0) cout<<"LEFT";
}

