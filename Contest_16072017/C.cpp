#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	long n;
	int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while (t-- > 0) {
		cin>>n;
		int count = 0;
		for (int i = 9; i >= 0; i--) {
			if (n/a[i] > 0) {
				count += n/a[i];
				n = n - a[i]*(n/a[i]);
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
