#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(long k) {
	if (k <= 1)
		return false;
	for (long i = 2; i <= sqrt(k); i++)
		if (k%i == 0)
			return false;
	return true;
}

bool check(long res, long k) {
	long i = 2;
	while (res > 0) {
		if (i == k)
			break;
		if ((res%i) == 0) {
			res = res/i;
			if (i < k)
				return false;
		} else if (res == 1) {
			break;
		} else {
			i++;
		}
	}
	return true;
}

int main() {
	long a, b, k;
	cin>>a>>b>>k;
	long count = 0;
	if (!isPrime(k)) {
		cout<<count;
	} else {
		long mul = a/k;
		long res = mul*k;
		while (res <= b) {
			if ((res >= a) && check(res, k)) {
				count++;
			}
			mul++;
			res = k*mul;
		}
		cout<<count;
	}
	return 0;
}
