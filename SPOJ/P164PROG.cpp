#include <iostream>

using namespace std;

int main() {
	long long n, sum = 0, i = 1;
	cin>>n;
	while (true) {
		sum += i*(i+1)/2;
		i++;
		if (sum > n) {
			cout<<i-2<<endl;
			break;
		}
	}
	return 0;
}
