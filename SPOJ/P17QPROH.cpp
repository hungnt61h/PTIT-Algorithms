#include <iostream>
#include <algorithm>

using namespace std;

bool comparator(long a, long b) {
	return a > b;
}

int main() {
	int t, n, tmp = 1;
	cin>>t;
	while (tmp <= t) {
		cin>>n;
		long u[n], v[n];
		long long res = 0;
		for (int i = 0; i < n; i++)
			cin>>u[i];
		for (int i = 0; i < n; i++)
			cin>>v[i];
		sort(u, u+n);
		sort(v, v+n, comparator);
		for (int i = 0; i < n; i++)
			res += u[i]*v[i];
		cout<<"Case #"<<tmp<<": "<<res;
		if (tmp != t)
			cout<<endl;
		tmp++;
	}
	return 0;
}
