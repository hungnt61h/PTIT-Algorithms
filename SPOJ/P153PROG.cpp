#include <iostream>

using namespace std;

int main() {
	long long n, k;
	cin>>n>>k;
	long long even;
	if (n%2 == 0)
		even = n/2 + 1;
	else
		even = n/2 + 2;
	if (k == 1)
		cout<<"1";
	else if (k < even)
		cout<<1+(k-1)*2;
	else if (k == even)
		cout<<"2";
	else
		cout<<2+(k-even)*2;
	return 0;
}
