#include <iostream>

using namespace std;
 
const long long MAX = 1000000007;

long long pow(long long base, long long exp) {
	long long ans = 1;
		while (exp) {
			if (exp & 1)
				ans = (ans * base) % MAX;
			base = (base * base) % MAX;
    		exp >>= 1;
    	}
    return ans;
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		long long base, exp;
		cin>>base>>exp;
		cout<<pow(base, exp);
		if (t > 0)
			cout<<endl;
	}
}
