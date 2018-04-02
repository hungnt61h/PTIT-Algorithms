#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int i;
		cin>>i;
		string s;
		cin>>s;
		int a[8];
		for (int i = 0; i < 8; i++)
			a[i] = 0;
		for (int i = 0; i <= 37; i++) {
			int j = 0;
			if (s[i] == 'H')
				j += 4;
			if (s[i+1] == 'H')
				j += 2;
			if (s[i+2] == 'H')
				j += 1;
			a[j]++;
		}
		cout<<i<<" ";
		for (int i = 0; i < 8; i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
