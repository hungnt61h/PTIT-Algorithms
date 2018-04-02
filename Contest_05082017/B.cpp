#include <iostream>

using namespace std;

void test() {
	int res = 0;
	int a, d;
	int n;
	cin>>n;
	for (int i = 0; i < n; i++) {
		cin>>a>>d;
		res += a-d;
	}
	if (res >= 0)
		cout<<"YES";
	else
		cout<<"NO";
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		test();
		if (t > 0)
			cout<<endl;
	}
	return 0;
}
