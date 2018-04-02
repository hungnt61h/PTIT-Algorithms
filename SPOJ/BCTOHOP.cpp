#include <iostream>

using namespace std;

void print(int x[], int k) {
	for (int i = 1; i <= k; i++) {
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

bool generateNext(int x[], int k, int n) {
	int i = k;
	while ((i > 0) && (x[i] == n-k+i))
	i--;
	if (i > 0) {
		x[i] = x[i] + 1;
		for (int j = i+1; j <= k; j++)
			x[j] = x[i] + j - i;
		return true;
	} else
		return false;
}

int main() {
	int n, k;
	bool ok = true;
	cin>>n>>k;
	int x[15];
	for (int i = 1; i <= k; i++) {
		x[i] = i;
	}
	while (ok) {
		print(x, k);
		ok = generateNext(x, k, n);
	}
	return 0;
}
