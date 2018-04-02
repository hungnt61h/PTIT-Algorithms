#include <iostream>
#include <string.h>

using namespace std;

int main() {
	bool num[100001];
	memset(num, false, sizeof(num));
	int n, count = 0, inp, n2;
	cin>>n;
	n2 = n*2;
	while (n2--) {
		cin>>inp;
		if (!num[inp])
			count++;
		num[inp] = true;
	}
	cout<<count-1;
	return 0;
}
