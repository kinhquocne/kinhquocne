/*#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int f[N],a[N],b[N],n;
int main()
{
    freopen("inp.txt","r",stdin);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        f[i]=min(f[i-1]+a[i],f[i-2]+b[i]);
        if( f[i]=f[i-2]+b[i])
        {
            a[i+1]=0;
            b[i+1]=0;
        }
        cout<<f[i]<<"\n";
    }
    cout<<min(f[n],f[n-1]);
}*/
#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int N = 1e5 + 4;
int n;
int a[N];
int b[N];
ll f[N];
ll F(int t) {
    if (t > n) return 0;
    ll& ans = f[t];
    if (ans > -1) return ans;
    else ans = 0;
    ll F1 = F(t + 1) + a[t];
    ll F2 = F(t + 2) + b[t];
    ans = min(F1, F2);
    return ans;

}
void trc(int t) {
    if (t > n) return;
    if (F(t) == F(t + 1) + a[t])
        cout << "1 ", trc(t + 1);
    else if (F(t) == F(t + 2) + b[t])
        cout << "2 0 ", trc(t + 2);
}
main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    memset(f, -1, sizeof(f));
    cout << F(1) << '\n';
    //trc(1);
}
