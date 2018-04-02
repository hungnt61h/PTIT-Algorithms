#include <iostream>
#include <math.h>

using namespace std;

bool isSpecialNumb(long long n) {
	int count = 0;
	int i = 2;
	while (n > 0) {
		if ((n%i) == 0) {
			count++;
			n = n/i;
		} else if (n == 1) {
			return true;
		} else {
			i++;
			count = 0;
		}
		if (count >= 2)
			return false;
	}
}

int main() {
	long long test, max = -1;
	cin>>test;
	for (int i = 1; i <= sqrt(test); i++) {
		if (test%i == 0) {
			if ((i >= max) && isSpecialNumb(i)) {
				max = i;
			}
			if ((test/i >= max) && isSpecialNumb(test/i)) {
				max = test/i;
			}
		}
	}
	cout<<max;
	return 0;
}
