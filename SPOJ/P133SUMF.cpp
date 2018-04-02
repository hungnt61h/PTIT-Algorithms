#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a, a+3);
	int d1 = a[1] - a[0];
	int d2 = a[2] - a[1];
	if (d1 < d2)
		cout<<(a[1] + d1);
	else
		cout<<(a[2] + d1);
	return 0;
}
