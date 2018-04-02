#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
typedef long long ll;

const ll MOD = 1e9+7;

ll powF(ll a, ll q) {
    a %= MOD;
    if (q == 0)
		return 1;
    return ((q % 2 == 1 ? a : 1) * binPow(a * a, q / 2)) % MOD;
}

int main() {
    int n;
    cin>>n;
    map<int, int> cnt;
    while (n--) {
        int x;
        cin>>x;
        cnt[x]++;
    }
    ll d = 1, ans = 1;
    for (auto x : cnt) {
        ll cnt = x.se;
        ll p = x.fi;
        ll fp = powF(p, (cnt + 1) * cnt / 2);
        ans = powF(ans, (cnt + 1)) * powF(fp, d) % MOD;
        d = d * (x.se + 1) % (MOD - 1);
    }
    cout<<ans;
    return 0;
}
