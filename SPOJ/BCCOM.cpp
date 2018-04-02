#include <iostream>

using namespace std;

long sum(long n) {
	long s = 0;
	while (n > 0) {
		s += n%10;
		n /= 10;
	}
	return s;
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		long n;
		cin>>n;
		while (n >= 10)
			n = sum(n);
		cout<<n<<endl;
	}
	return 0;
}
