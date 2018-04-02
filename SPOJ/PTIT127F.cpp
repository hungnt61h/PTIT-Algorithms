#include <iostream>

using namespace std;

int main() {
	long n;
	cin>>n;
	long a[n+1];
	for (long i = 1; i <= n; i++)
		cin>>a[i];
	long x = n, count = 0;
	for (long i = n; i > 0; i--) {
		if (a[i] == x)
			x--;
		else
			count++;
	}
	cout<<count;
	return 0;
}
