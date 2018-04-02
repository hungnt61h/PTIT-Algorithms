#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(long long n) {
    for (long long i = 2; i <= sqrt(n); i++) {
        if(n%i == 0)
            return false;
    }
    return true;
}

bool check(long long n, long long k) {
	if (n == 1) {
        if (k == 1)
            return true;
        else
            return false;
    } else {
    	if (isPrime(n)) {
            if (k >= n)
                return false;
            else
                return true;
        } else {
            for (long long c = 2; c <= k; c++) {
                if (n%c == 0)
                    return false;
            }
            return true;
        }
	}
}

int main() {
    long long n, k;
    cin>>n>>k;

	if (check(n, k))
		cout<<"Yes";
	else
		cout<<"No";

    return 0;
}
