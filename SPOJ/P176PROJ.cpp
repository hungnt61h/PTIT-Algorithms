#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

struct factNum {
	long base, exp;
};

bool isPrime(long &num) {
	for (long i = 2; i <= sqrt(num); i++) {
		if ((num%i) == 0) {
			return false;
		}
	}
	return true;
}

void factor(long num, vector<factNum> &b) {
	if (isPrime(num)) {
		
	}	
	else {
		long count = 0, i = 2;
		while (num > 0) {
			if ((num%i) == 0) {
				count++;
				num = num/i;
			} else if (num == 1) {
				factNum tmp;
				tmp.base = i;
				tmp.exp = count;
				b.push_back(tmp);
				break;
			} else {
				if (count != 0) {
					factNum tmp;
					tmp.base = i;
					tmp.exp = count;
					b.push_back(tmp);
				}		
				i++;
				count = 0;
			}
		}
	}
}

long long powMod(long long base, long long exp) {
	long long res = 1;
	base = base%1000000007;
	while (exp > 0) {
		if (exp%2 == 1)
            res = (res*base)%1000000007;
        exp = exp>>1;
        base = (base*base)%1000000007;
	}
	return res;
}

void check(long a[], long l, long r) {
	long long res = 1, i;
	vector<factNum> arr;
	for (i = l; i <= r; i++) {
		if (a[i] == 1) {
			factNum tmp;
			tmp.base = 1;
			tmp.exp = 1;
			arr.push_back(tmp);
		}
		else
			factor(a[i], arr);
	}
	for (i = 0; i < arr.size(); i++) {
		if (arr[i].base != 1) {
			long long p = (((arr[i].base - 1)%1000000007)*powMod(arr[i].base, arr[i].exp - 1))%1000000007;
			res = (res*p)%1000000007;
		}	
	}
	cout<<res<<endl;
}

int main() {
	long n, m, l, r;
	cin>>n;
	long a[n];
	for (long i = 0; i < n; i++)
		cin>>a[i];
	cin>>m;
	while (m > 0) {
		cin>>l>>r;
		check(a, l-1, r-1);
		m--;
	}
	return 0;
}
