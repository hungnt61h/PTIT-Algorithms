#include <iostream>
#include <algorithm>
#include <windows.h>

using namespace std;

long arr[100010];

bool cmp(long a, long b) {
	return (a > b);
}

void test() {
	memset(arr, 0, sizeof(arr));
	long u, v, n;
	cin>>n;
	for (long i = 0; i < n-1; i++) {
		cin>>u>>v;
		arr[v] = arr[u]+1;
	}
	sort(arr, arr+100010, cmp);
	cout<<arr[0];
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
