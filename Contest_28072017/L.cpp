#include <iostream>
#include <string.h>

using namespace std;

const int MAX = 1005;
int a[MAX][MAX];

void spread(long i, long j) {
	a[i][j] = 0;
	if (a[i-1][j-1] == 1)
		spread(i-1, j-1);
	if (a[i-1][j] == 1)
		spread(i-1, j);
	if (a[i-1][j+1] == 1)
		spread(i-1, j+1);
	if (a[i][j+1] == 1)
		spread(i, j+1);
	if (a[i+1][j+1] == 1)
		spread(i+1, j+1);
	if (a[i+1][j] == 1)
		spread(i+1, j);
	if (a[i+1][j-1] == 1)
		spread(i+1, j-1);
	if (a[i][j-1] == 1)
		spread(i, j-1);
	return;
}

long count(long n, long m) {
	long cnt = 0;
	for (long i = 1; i <= n; i++)
		for (long j = 1; j <= m; j++)
			if (a[i][j] == 1) {
				spread(i, j);
				cnt++;
			}
	return cnt;
}

void test() {
	long n, m;
	cin>>n>>m;
	memset(a, 0, sizeof(a));
	for (long i = 1; i <= n; i++)
		for (long j = 1; j <= m; j++)
			cin>>a[i][j];
	cout<<count(n, m);
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
