#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin>>n;
	int x[n];
	for (int i = 0; i < n; i++)
		cin>>x[i];
	sort(x, x+n);
	int mid = n/2;
	if (!(n&1))
		mid--;
	cout<<x[mid];
	return 0;
}
