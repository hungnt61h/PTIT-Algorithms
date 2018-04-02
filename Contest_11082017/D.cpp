#include <iostream>
#include <algorithm>
#include <windows.h>

using namespace std;

const long MAX = 200001;
long d[MAX];

struct edge {
	long h, t, w;
};

edge a[MAX];

long Find(long x) {
	while (d[x] != x)
		x = d[x];
	return x;
}

long Union(long x, long y) {
	x = Find(x);
	y = Find(y);
	if (x == y)
		return 0;
	else if (x < y)
		d[y] = x;
	else
		d[x] = y;
	return 1;
}

bool cmp(edge e1, edge e2) {
	return (e1.w < e2.w);
}

void test() {
	long n, m;
	cin>>n>>m;
	for (long i = 1; i <= n; i++)
		d[i] = i;
	for (long i = 1; i <= m; i++)
		cin>>a[i].h>>a[i].t>>a[i].w;
	sort(a+1, a+m+1, cmp);
	long long weight = 0;
	for (long i = 1; i <= m; i++)
		if (Union(a[i].h, a[i].t) != 0)
			weight += a[i].w;
	cout<<weight;
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
