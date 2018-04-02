#include <iostream>

using namespace std;

void countDiv(long long a[], long long &num) {
	long long n = num/5;
	if (num%5 == 0)
		for (int i = 0; i < 5; i++)
			a[i] = n;
	else {
		int tmp = num%5;
		for (int i = 0; i < 5; i++) {
			if ((i == 0) || (i > tmp))
				a[i] = n;
			else
				a[i] = n+1;
		}
	}
}

int main() {
	long long n, m;
	cin>>n>>m;
	long long f[5], g[5];
	countDiv(f, n);
	countDiv(g, m);
	long long count = f[0]*g[0] + f[1]*g[4] + f[2]*g[3] + f[3]*g[2] + f[4]*g[1];
	cout<<count<<endl;
	return 0;
}
