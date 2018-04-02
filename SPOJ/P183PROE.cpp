#include <iostream>
#include <math.h>

using namespace std;

void run() {
	int n, m;
	cin>>n;
	int A[n+1];
	for (int i = 1; i <= n; i++)
		cin>>A[i];
	cin>>m;
	int B[m+1];
	for (int i = 1; i <= m; i++)
		cin>>B[i];
	long long sum = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (i != j || A[i] != B[j])
				sum += (i-j)*abs(A[i]-B[j]);
	cout<<sum<<endl;
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		run();
	}
	return 0;
}
