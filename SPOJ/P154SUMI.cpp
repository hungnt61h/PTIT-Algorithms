#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n, p, s;
	cin>>n;
	int count = 0;
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j++) {
			s = i*i + j*j;
			p = sqrt(s);
			if ((p*p == s) && (p <= n))
				count++;
		}
	cout<<count;
	return 0;
}
