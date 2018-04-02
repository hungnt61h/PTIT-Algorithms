#include <iostream>

using namespace std;

const long long MOD = 1000000009;

long long powMod(long long n) {
    if (n <= 0)
        return 0;
    if (n == 1)
        return 2;
    long long ans;
    if (n%2) {
        long long buf = powMod(n/2);
        ans = buf*buf*2 % MOD;
	} else {
        long long buf = powMod(n/2);
        ans =  buf*buf % MOD;
    }
    if (ans-2 <= 0)
		return ans + MOD;
    return ans;
}

int main() {
    long long n, m, k;
    cin>>n>>m>>k;

    long long sec = n/k;
    long long st = n-sec*k;

    long long ans = 0;
    if (sec*(k-1)+n-sec*k >= m)
        ans = m % MOD;
    else {
        long long r = m-sec*(k-1);
        long long len = st + (r-st)*k;
        ans += len-(len/k)*k;
        ans += (k*((powMod(len/k+1)-2) % MOD)) % MOD;
        ans += m-len;
        ans %= MOD;
    }

    cout<<ans;
    return 0;
}
