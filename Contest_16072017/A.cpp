#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin>>t;
	while (t-- > 0) {
		long n;
		cin>>n;
		long a[100002], i;
		for (i = 0; i < n; i++)
			cin>>a[i];
		sort(a, a+n);
		long num, count = 1, max = 0;
		for (long i = 0; i < n-1; i++) {
			if (a[i] == a[i+1])
				count++;
			else {
				if (count >= max) {
					max = count;
					num = a[i];
				}
				count = 1;
			}
		}
		if ((a[n-2] == a[n-1]) && (count >= max)) {
			max = count;
			num = a[n-1];
		}
		if (max > n/2)
			cout<<num<<endl;
		else
			cout<<"NO\n";
	}
	return 0;
}
