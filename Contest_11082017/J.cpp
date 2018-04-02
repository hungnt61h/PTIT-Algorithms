#include <iostream>
#include <algorithm>

using namespace std;
 
int arr[200001], dp[200001];
 
void push(int i, int f, int t) {
	if (dp[i]) {
		arr[i] += dp[i];
		if (f < t) {
			dp[i*2] += dp[i];
			dp[i*2+1] += dp[i];
		}
		dp[i] = 0;
	}
}
 
void modify(int i, int f, int t, int qf, int qt, int v) {  
	if (qf <= f && t <= qt) {
		dp[i] += v;
		push(i, f, t);
	} else {
		push(i, f, t);
		int m = (f + t)/2;
		if (qf < m + 1)
			modify(i*2, f, m, qf, qt, v);
		if (qt > m)
			modify(i*2+1, m+1, t, qf, qt, v);
		arr[i] = max(arr[i], arr[i*2]);
		arr[i] = max(arr[i], arr[i*2+1]);
	}
}
 
int query(int i, int f, int t, int qf, int qt) {
	push(i, f, t);
	if (qf <= f && t <= qt)
		return arr[i];
	else {
		int m = (f+t)/2;
		if (qt < m+1)
			return query(i*2, f, m, qf, qt);
		if (qf > m)
			return query(i*2+1, m+1, t, qf, qt);
		return max(query(i*2, f, m, qf, qt), query(i*2+1, m+1, t, qf, qt));
	}
}
 
int main() {
	int n, m;
	cin>>n>>m;
	while (m--) {
		int f, t, v;
		cin>>f>>t>>v;
		modify(1, 1, n, f, t, v);
	}
	long q;  
	cin>>q;
	while (q--) {
		int f, t;
		cin>>f>>t;
		cout<<query(1, 1, n, f, t)<<endl;
	}
} 
