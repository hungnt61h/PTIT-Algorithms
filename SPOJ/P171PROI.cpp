#include <iostream>

using namespace std;

long countNumber(long long n) {
	long long f1 = 1, f2 = 2, next = 2;
	long count = 2;
	if (n == 2)
		return count;
	while (next < n) {
		next = f1 + f2;
		f1 = f2;
		f2 = next;
		count++;
	}
	return count;
}

void generateFib(long n, long long fib[]) {
	fib[0] = 1;
	fib[1] = 2;
	for (long i = 2; i < n; i++) {
		fib[i] = fib[i-1] + fib[i-2];
	}
}

long calculate(long long n) {
	long count = 0;
	long c = countNumber(n);
	long long fib[c], sum = 0;
	generateFib(c, fib);
	for (long i = 0; i < c; i++)
		cout<<fib[i]<<" ";
	for (long i = 0; i < c; i++) {
		sum = fib[i];
		for (long j = 0; j < c; j++) {
			if (j == i)
				continue;
			else {
				sum += fib[j];
				if (sum == n)
					count++;
			}
		}
	}
	return count;
}

int main() {
	int nTest;
	cin>>nTest;
	long long test;
	for (int i = 0; i < nTest; i++) {
		cin>>test;
		cout<<calculate(test)<<endl;
	}
	return 0;
}
