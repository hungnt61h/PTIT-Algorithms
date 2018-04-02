#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int x) {
	for (int i = 2; i <= sqrt(x); i++)
		if (x%i == 0)
			return false;
	return true;
}

bool check(int x, int y) {
	if (!isPrime(y))
		return false;
	while (x < y) {
		if (isPrime(x)) {
			return false;
		}
		x++;
	}
	return true;
}

int main() {
	int x, y;
	cin>>x>>y;
	if (check(x+1, y))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
