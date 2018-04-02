#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	double l;
	cin>>n>>l;
	double a[n];
	for (int i = 0; i < n; i++) {
		cin>>a[i];
	}
	sort(a, a+n);
	double max = a[0];
	if (max <= (l - a[n-1]))
		max = l - a[n-1];
	for (int i = 1; i < n; i++) {
		if ((a[i] - a[i-1])/2 >= max) {
			max = (a[i] - a[i-1])/2;
		}
	}
	printf("%0.10lf", max);
	return 0;
}
