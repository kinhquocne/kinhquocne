#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int n,L;
long long f[N];
struct at{
    int a, t, id;
    bool operator< (const at &hi){
        if(a != hi.a) return a < hi.a;
        return t > hi.t;
    }
}quoc[N];
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if(fopen("WALKING.INP","r")){
        freopen("WALKING.INP","r",stdin);
        freopen("WALKING.OUT","w",stdout);
    }
    cin >> n >> L;
    for(int i = 1; i <= n; ++i){
        int x, y; cin >> x >> y;
        quoc[i] = {x, y, i};
    }
    sort(quoc + 1, quoc + 1 + n);
    for(int i = 1; i <= n; ++i){
        int a = quoc[i].a, t = quoc[i].t, id = quoc[i].id;
        f[id] = max(f[quoc[i-1].id], a + 1LL * t * L);
        //cout<<quoc[i].a<<" "<<quoc[i].t<<" "<<quoc[i].id<<" "<<f[id]<<'\n';
    }
    for(int i = 1; i <= n; ++i)cout<<f[i]<<'\n';
}