#include <bits/stdc++.h>

using namespace std;

const long MOD = 1000000007;

long long C(int n, int k) {
    long long c[k+1];
    memset(c, 0, sizeof(c));
    c[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = min(i, k); j > 0; j--)
            c[j] = (c[j]%MOD + c[j-1]%MOD)%MOD;
    }
    return c[k];
}

void test() {
	int n, k;
	cin>>n>>k;
	cout<<C(n, k);
}

int main() {
    int t;
	cin>>t;
	while (t--) {
		test();
		if (t > 0)
			cout<<endl;
	}
    return 0;
}
