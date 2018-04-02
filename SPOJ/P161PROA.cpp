#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(long long a) {
	int count = 0;
	if (a < 2)
		return false;
	for (long long i = 2; i <= sqrt(a); i++) {
		if ((a % i) == 0) {
			count++;
			break;
		}
	}
	if (count == 0)
		return true;
	else
		return false;
}

bool isSqr(long long a) {
	long long b = sqrt(a);
	if ((b*b) == a)
		return true;
	else
		return false;
}

int main() {
	int n;
	cin>>n;
	long long x[n];
	for (int i = 0; i < n; i++) {
		cin>>x[i];
		if (isPrime(sqrt(x[i])) && isSqr(x[i]))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
