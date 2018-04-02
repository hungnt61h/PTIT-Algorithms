#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

vector<long long> primes;
bool a[4294967296];

void sieve() {
    memset(a, true, sizeof(a));
    for (long long p = 2; p*p <= 4294967296; p++) {
        if (a[p]) {
            for (long long i = p*2; i <= 4294967296; i += p)
                a[i] = false;
        }
    }
    for (long long p = 2; p*p <= 4294967296; p++) {
    	if (a[p])
    		primes.push_back(p);
	}
}



int main() {
	long long n;
	cin>>n;
	sieve();
	return 0;
}
