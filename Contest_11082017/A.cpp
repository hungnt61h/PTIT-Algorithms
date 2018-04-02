#include <iostream>

using namespace std;

const long long INF = 1e18;

int n, length, d[1000], prime[1000], count;
bool visit[1000];
long long ans;

void init() {
    for (int i = 2; i <= 1000;) {
        prime[++count] = i;
        for (int j = i*2; j <= 1000; j += i)
            visit[j] = true;
        for (i++; i <= 1000 && visit[i]; ++i);
    }
}

void check() {
    long long res = 1;
    for (int i = length, j = 1; i >= 1; i--, j++) {
        for (int j = 1; j <= d[i]; j++) {
            long long temp = res*prime[j];
            if (temp > INF || temp > ans)
				return;
            res = temp;
        }
    }
    if (res < ans)
		ans = res;
}

void calculate(int u, int x, int last, long long cur) {
    if (x == 1) {
        ans = min(ans, cur);
        return;
    }
    for (int i = min(x, 60); i >= 2; i--) {
        if (x%i == 0) {
            long long temp = cur;
            for (int j = 1; j < i; j++) {
                temp *= prime[u];
                if (temp > ans || temp > INF)
					break;
            }
            if (temp > ans || temp > INF)
				continue;
            calculate(u+1, x/i, i, temp);
        }
    }
}

void test() {
	cin>>n;
    ans = INF;
    calculate(1, n, 2, 1);
    cout<<ans;
}

int main () {
    init();
    int t;
	cin>>t;
	while (t--) {
		test();
		if (t > 0)
			cout<<endl;
	}
}
