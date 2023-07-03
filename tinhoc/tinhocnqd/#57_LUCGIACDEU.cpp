#include<bits/stdc++.h>
#define Eps 0.0001
using namespace std;
const int N=1e3+1;
long long d;
double kc[20];
struct point{double x, y;}f[N];
bool check(double a,double b)
    return(abs(a-b)<=Eps);
main()
{
    for(int i=1; i<=6; i++)cin>>f[i].x>>f[i].y;
    for(int i=1; i<=5; i++)
        for(int j=i+1; j<=6; j++)
            kc[d++]=sqrt((f[i].x - f[j].x)*(f[i].x - f[j].x) + (f[i].y - f[j].y)*(f[i].y - f[j].y));
    sort(kc+1, kc+1+d);
    if(check(kc[1],kc[6]) && check(kc[7],kc[12]) && check(kc[13],kc[15]))cout<<"YES";
    else cout<<"NO";
}
