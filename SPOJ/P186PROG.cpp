#include <iostream>
#include <map>

using namespace std;

void run() {
	long long n;
	cin>>n;
	long long a[n+1], pre[n+1], suf[n+1];
	map<long long, long long> m1, m2;
	
	for (long long i = 1; i <= n; i++)
		cin>>a[i];
	
	pre[0] = 0;
	for (long long i = 1; i <= n; i++) {
		pre[i] = pre[i-1] + a[i];
		m1[pre[i]] = i;
	}
	
	for (long long i = 1; i <= n; i++) {
		suf[i] = pre[n] - pre[i-1];
		m2[suf[i]] = i;
	}
	
	if (pre[n]%2) {
		cout<<"NO"<<endl;
		return;
	}
	
	long long half = pre[n]/2;
	
	if (m1[half]) {
		cout<<"YES"<<endl;
		return;
	}
	
	for (long long i = 1; i <= n; i++) {
		if (m1[half+a[i]] >= i) {
			cout<<"YES"<<endl;
			return;
		}
		if (m2[half+a[i]] && m2[half+a[i]] <= i) {
			cout<<"YES"<<endl;
			return;
		}
	}
	
	cout<<"NO"<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin>>T;
	while (T--) {
		run();
	}
}
