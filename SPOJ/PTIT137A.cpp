#include <iostream>
#include <math.h>

using namespace std;

bool countSub(unsigned long a, unsigned long b, unsigned long c, unsigned long d) {
	int count = 0;
	if ((a == b) && (b == c) && (c == d) && (a == 0)) {
		return false;
	}
	while (true) {
		if ((a == b) && (b == c) && (c == d)) {
			cout<<count<<endl;
			break;
		} else {
			unsigned long temp = a;
			a = abs(a-b);
			b = abs(b-c);
			c = abs(c-d);
			d = abs(d-temp);
			count++;
		}
	}
	return true;
}

int main() {
	unsigned long a, b, c, d;
	bool ok = true;
	while (ok) {
		cin>>a>>b>>c>>d;
		ok = countSub(a, b, c, d);
	}
	return 0;
}
