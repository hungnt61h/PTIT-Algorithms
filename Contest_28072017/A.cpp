#include <iostream>

using namespace std;

long long len[10000];

void init() {
	len[1] = 1;
	len[2] = 1;
	for (int i = 3; i <= 100; i++)
		len[i] = len[i-1] + len[i-2];
}

char find(const char *a, const char *b, long long n, long long i) {
	while (n > 2) {
		if (i <= len[n-2]) {
			n -= 2;
		} else {
			i -= len[n-2];
			n -= 1;
		}
	}
	return (n == 1) ? a[i-1] : b[i-1];
}

int main() {
	init();
	int t, n;
	long long i;
	cin>>t;
	while(t--) {
		cin>>n>>i;
		cout<<find("A", "B", n, i);
		if (t > 0)
			cout<<endl;
	}
	return 0;
}
