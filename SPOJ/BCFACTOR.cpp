#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(long long n) {
	int count = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if ((n%i) == 0) {
			count++;
			break;
		}
	}
	if (count == 0)
		return true;
	return false;
}

void factorNumber(long long n) {
	int count = 0;
	int i = 2;
	while (n > 0) {
		if ((n%i) == 0) {
			count++;
			n = n/i;
		} else if (n == 1){
			cout<<i<<" "<<count<<endl;
			break;
		} else {
			if (count != 0)
				cout<<i<<" "<<count<<endl;
			i++;
			count = 0;
		}
	}
}

int main() {
	long long n;
	cin>>n;
	if (isPrime(n)){
		cout<<n<<" 1"<<endl;
	} else {
		factorNumber(n);
	}
	return 0;
}
