#include <iostream>

using namespace std;

long long pow (long long base, long long exp) {
	long long res;
	if (exp == 0)
		return 1;
	if (exp == 1)
		return base;
	if (exp % 2 == 0) {
		res = pow(base, exp/2);
		return res*res;
	}
	if (exp % 2 != 0) {
		res = pow(base, (exp-1)/2);
		return res*res*base;
	}
}

long long sum (long long n) {
	long long i = 2, s = 1, count = 0, save = n;
	while (i*i <= save || n > 1) {
		if (n % i == 0) {
			++count;
			n /= i;
		} else {
			s *= (pow(i,count+1)-1)/(i-1);
			i++;
			count = 0;
		}
	}
	s *= (pow(i,count+1)-1)/(i-1);
	if (n > 1) s *= n;
	return s;
}

int main () {
	int t;
	cin>>t;
	while (t--) {
		long long n;
		cin>>n;
		if (sum(sum(n)) == 2*n)
			cout<<"YES";
		else
			cout<<"NO";
		if (t > 0)
			cout<<endl;
		
	}
}
