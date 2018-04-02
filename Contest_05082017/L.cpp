#include <iostream>

using namespace std;

const long MOD = 1000000007;

long long count(long n, long k) {
    long long res[n];
    res[0] = 1;
	res[1] = 1;
    for (long i = 2; i < n; i++) {
    	res[i] = 0;
    	for (long j = 1; j <= k && j <= i; j++)
        	res[i] = ((res[i]%MOD) + (res[i-j]%MOD))%MOD;
    }
    return res[n-1];
}

void test() {
	long n, k;
	cin>>n>>k;
	cout<<count(n+1, k);
}

int main () {
    int t;
    cin>>t;
    while (t--) {
    	test();
    	if (t > 0)
    		cout<<endl;
	}
    return 0;
} 
