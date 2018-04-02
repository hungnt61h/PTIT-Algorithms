#include <iostream>
#define MOD 1000000009
#define ull unsigned long long

using namespace std;

ull fi(ull n) {
    ull result = n;
    for (ull p = 2; p*p <= n; p++) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }

    if (n > 1)
        result -= result / n;
    return result%MOD;
}

int main() {
    ull n;
    cin>>n;
    if (n == 1)
		cout<<1;
	else {
		ull res = 1;
	    for (ull i = 2; i <= n; i++) {
	    	res = (res * fi(i))%MOD;
		}
		cout<<res;
	}
    return 0;
}

