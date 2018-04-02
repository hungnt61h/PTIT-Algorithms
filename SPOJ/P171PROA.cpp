#include <iostream>
#define LIMIT 9223372036854775807

using namespace std;

int main() {
	long long l, r, p = 1;
	long x;
	cin>>l>>r>>x;
	bool ok = true;
	while (p <= r) {
		if (p >= l) {
			cout<<p<<" ";
			ok = false;
		}
		if (p <= LIMIT/x)
			p *= x;
		else
			break;
	}
	if (ok)
		cout<<"-1";
	return 0;
}
