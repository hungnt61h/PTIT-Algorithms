#include <bits/stdc++.h>

using namespace std;

const long N = 100010;
const long long MAX = 1e18;

pair<double, double> p[N], arr[N];
double ans;
 
double sqr(double x) {
	return x*x;
}
 
double dist(pair<double, double>& x, pair<double, double>& y) {
	return sqr(x.first - y.first) + sqr(x.second - y.second);
}
 
bool cmp(pair<double, double>& x, pair<double, double>& y) {
	return x.second < y.second;
}
 
void solve(long f, long t) {
	if (f == t)
		return;
	long m = (f+t)/2;
	solve(f, m);
	solve(m+1, t);
	long sz = 0;
	for (long i = f; i <= t; i++)
		if (sqr(p[i].first - p[m].first) < ans)
			arr[++sz] = p[i];
	sort(arr+1, arr+sz+1, cmp);
	for (long i = 1; i <= sz; i++)
		for (long j = i+1; j <= sz && sqr(arr[j].second - arr[i].second) < ans; j++) {
			double val = dist(arr[i], arr[j]);
			ans = min(ans, val);
		}
}

void test() {
	long n;
	cin>>n;
	for (long i = 1; i <= n; i++)
		cin>>p[i].first>>p[i].second;
	sort(p+1, p+n+1);  
	ans = MAX;
	solve(1, n);
	printf("%.6lf", sqrt(ans));
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
