#include <iostream>

using namespace std;

int main() {
	int n, k, sum = 0, i = 0;
	cin>>n>>k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin>>a[i];
		sum += a[i];
	}
	double avg = double(sum)/n;
	double max = k - 0.5;
	while (avg < max) {
		i++;
		n++;
		sum += k;
		avg = double(sum)/n;
	}
	cout<<i;
	return 0;
}
