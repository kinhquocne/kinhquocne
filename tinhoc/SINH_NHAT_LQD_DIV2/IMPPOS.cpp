#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
/*
*/
const int K = 1e5 + 4;
int n, m, k;
pair<int, int> p[K];
namespace SUB1 {
int a[101][101];
int f[101][101];

int calc() {

memset(f, 0, sizeof(f));

for (int i = 1; i <= n; i++) {

  for (int j = 1; j <= m; j++) {

    f[i][j] = max(f[i - 1][j], f[i][j - 1]) + a[i][j];

  }

}

return f[n][m];
}

void solve() {

memset(a, 0, sizeof(a));

for (int i = 1; i <= k; i++) {

  int x, y; cin >> x >> y;

  a[x][y] = 1; p[i] = {x, y};

}

int ans = calc();

int cnt = 0;

for (int i = 1; i <= k; i++) {

  a[p[i].fi][p[i].se] = 0;

  if (calc() == ans - 1) cnt++;

  a[p[i].fi][p[i].se] = 1;

}

cout << cnt;
}

}

namespace SUB2 {

vector<int> f;

int calc(int del) {

f.clear();

for (int i = 1; i <= k; i++) if (i != del) {

  int x = upper_bound(all(f), p[i].se) - f.begin();

  if (x == f.size())

    f.push_back(p[i].se);

  else

    f[x] = p[i].se;

}

return f.size();
}

void solve() {

for (int i = 1; i <= k; i++)

  cin >> p[i].fi >> p[i].se;

sort(p + 1, p + 1 + k);

int ans = calc(0);

int cnt = 0;

for (int i = 1; i <= k; i++)

  if (calc(i) == ans - 1) cnt++;

cout << cnt;
}

}

main() {

ios_base::sync_with_stdio(0);

cin.tie(0); cout.tie(0);

cin >> n >> m >> k;

if (n <= 100 && m <= 100 && k <= 100)

SUB1 :: solve();
else if (k <= 1000)

SUB2 :: solve();
}
