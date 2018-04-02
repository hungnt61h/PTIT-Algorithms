#include <iostream>

using namespace std;
 
const long long MOD = 1000000007;
 
unsigned long long a[101][50001];
 
unsigned long long count(long n, long k) {
    if (n == 0) {
        if (k == 0)
        	return 1;
        return 0;
    }
    if (a[n][k] != -1)
    	return a[n][k];
    unsigned long long res = 0;
    for (int i = 0; i <= 9; i++)
        if (k-i >= 0)
        	res = (res + count(n-1,k-i))%MOD;
    return a[n][k] = res;
}

unsigned long long countDigit(long n, long k) {
    if (n == 0) {
        if (k == 0)
        	return 1;
        return 0;
    }
    unsigned long long res = 0;
    for (int i = 1; i <= 9; i++)
        if (k-i >= 0)
        	res = (res + count(n-1,k-i))%MOD;
    return res;
}

int main() {
	long t, n, k;
	cin>>t;
	while (t--) {
	    cin>>n>>k;
	    for (int i = 0; i <= n; i++)
	        for (int j = 0; j <= k; j++)
	            a[i][j] = -1;
	    unsigned long long d = countDigit(n, k);
	    cout<<d;
	    if (t > 0)
	    	cout<<endl;
	}
	return 0;
}
