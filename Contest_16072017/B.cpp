#include <iostream>

using namespace std;

int main() {
	int t, d, n;
	cin>>t;
	while (t-- > 0) {
		cin>>n>>d;
		long a[1005];
		for (int i = 1; i <= n; i++)
			cin>>a[i];
		for (int i = d+1; i <= n; i++)
			cout<<a[i]<<" ";
		for (int i = 1; i <= d; i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
