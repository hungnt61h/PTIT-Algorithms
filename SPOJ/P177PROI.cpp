#include <iostream>
#include <math.h>
#include <fstream>

#define MAX 1000000001

using namespace std;

bool isPrime[MAX];

long long countPrimes(long long n) {
	for (long long i = 2; i < n; i++) {
    	isPrime[i] = true;
	}
	for (long long i = 2; i * i < n; i++) {
    	if (!isPrime[i])
			continue;
    	for (long long j = i * i; j < n; j += i) {
			isPrime[j] = false;
    	}
	}
	long long count = 0;
	ofstream f;
	f.open("output.txt");
	for (long long i = 2; i < n; i++) {
    	if (isPrime[i]) {
    		f<<i<<endl;
    		count++;
		}
	}
	f.close();
	return count;
}

int main() {
//	long long n;
//	cin>>n;
//	long long m = sqrt(n);
	countPrimes(1000000000);
	cout<<"DONE!";
	return 0;
}
