#include <iostream>

using namespace std;

const int MAX = 1001;
long a[MAX][MAX], res[MAX][MAX], n, m;

void init() {
	cin>>n>>m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin>>a[i][j];
}

long min(long x, long y, long z) {
	if (x < y)
		return (x < z)? x : z;
	else
		return (y < z)? y : z;
}

long minCost(int n, int m) {
	int i, j;
	res[0][0] = a[0][0];
	for (i = 1; i < n; i++)
		res[i][0] = res[i-1][0] + a[i][0];
	for (j = 1; j < m; j++)
		res[0][j] = res[0][j-1] + a[0][j];
	for (i = 1; i < n; i++)
		for (j = 1; j < m; j++)
			res[i][j] = min(res[i-1][j-1], res[i-1][j], res[i][j-1]) + a[i][j];
	return res[n-1][m-1];
}

void test() {
	init();
	cout<<minCost(n, m);
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
