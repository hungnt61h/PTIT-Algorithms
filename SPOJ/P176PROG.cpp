#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {                       
    if ((a == 0) || (b == 0))
		return a+b;
    while (a != b) {
        if (a > b)
			a = a-b;
        else
			b = b-a;
    }
    return a;
}

long long lcm(long a, long b) {
	return ((a*b)/gcd(a, b));
}

int main() {
	long long n, x, y, z;
	cin>>n>>x>>y>>z;
	cout<<(n < lcm(y,z)/y ? n : lcm(y,z)/y);
	return 0;
}
