#include <iostream>

using namespace std;

const long long MAX = 1000000007;

void multiply(long long F[2][2], long long M[2][2]) {
	long long x = ((F[0][0]%MAX)*(M[0][0]%MAX))%MAX%MAX + ((F[0][1]%MAX)*(M[1][0]%MAX))%MAX%MAX;
	long long y = ((F[0][0]%MAX)*(M[0][1]%MAX))%MAX%MAX + ((F[0][1]%MAX)*(M[1][1]%MAX))%MAX%MAX;
	long long z = ((F[1][0]%MAX)*(M[0][0]%MAX))%MAX%MAX + ((F[1][1]%MAX)*(M[1][0]%MAX))%MAX%MAX;
	long long w = ((F[1][0]%MAX)*(M[0][1]%MAX))%MAX%MAX + ((F[1][1]%MAX)*(M[1][1]%MAX))%MAX%MAX;
	
	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}

void power(long long F[2][2], long long n) {
	if (n == 0 || n == 1)
    	return;
	long long M[2][2] = {{1,1}, {1,0}};
	power(F, n/2);
	multiply(F, F);
	if (n%2 != 0)
    	multiply(F, M);
}

long long fib(long long n) {
	long long F[2][2] = {{1,1}, {1,0}};
	if (n == 0)
		return 0;
	power(F, n-1);
	return F[0][0]%MAX;
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		long long n;
		cin>>n;
		cout<<fib(n);
		if (t > 0)
			cout<<endl;
	}
	return 0;
}
