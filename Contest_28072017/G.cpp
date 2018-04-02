#include <iostream>
#include <string.h>

using namespace std;

const long long MOD = 1000000007;

int d;

struct  matrix{
	long long a[11][11];

	matrix() {
		memset(a, 0, sizeof(long long)*11*11);
	}

	matrix operator* (matrix b) {
		matrix c;
		for (int k = 0; k < 11; k++) {
			for (int i = 0; i < 11; i++) {
				for (int j = 0; j < 11; j++) {
					c.a[i][j] = c.a[i][j]%MOD + ((a[i][k]% MOD)*(b.a[k][j]% MOD))%MOD;
				}
			}
		}
		return c;
	}
};



matrix pow_matrix(matrix a, long long k) {
	if (k == 1 || k == 0)
		return a;
	matrix b = pow_matrix(a, k/2);
	b = b*b;
	if (k%2 != 0)
		b = b*a;
	return b;
}

void test() {
	long long k;
	cin>>d>>k;
	matrix m;
	for (int i = 0; i < d; i++)
		for (int j = 0; j < d; j++)
			cin>>m.a[i][j];
	matrix res = pow_matrix(m, k);
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			cout<<res.a[i][j];
			if (j < d-1)
				cout<<" ";
		}
		if (i < d-1)
			cout<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		test();
		if (t > 0)
			cout<<endl;
	}
	return 0;
}
