#include <iostream>
#include <math.h>

using namespace std;

const int MAX = 1e8;

bool isPrime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n%i == 0)
			return false;
	return true;
}

int main() {
	int n, m;
	cin>>n>>m;
	while (true) {
		if (n == 0 || m == MAX)
			break;
		if (isPrime(m)) {
			cout<<m<<" ";
			n--;
		}
		m++;
	}
	return 0;
}
