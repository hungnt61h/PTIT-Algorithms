#include <iostream>

using namespace std;

int main() {
	int n, m, x, y;
	cin>>n;
	int a[n+1];
	for (int i = 1; i <= n; i++)
		cin>>a[i];
	
	cin>>m;
	while (m--) {
		cin>>x>>y;
		if (0 <= x-1)
			a[x-1] += y-1;
		if (x-1 <= n)
			a[x+1] += a[x]-y;
		a[x] = 0;
	}
	
	for (int i = 1; i <= n; i++)
		cout<<a[i]<<endl;
	
	return 0;
}
