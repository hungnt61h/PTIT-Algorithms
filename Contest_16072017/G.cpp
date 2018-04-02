#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin>>t;
	while (t-- > 0) {
		fflush(stdin);
		string s;
		cin>>s;
		int size = s.length();
		int count = 0;
		for (int i = 0; i < size/2; i++) {
			if (s[i] != s[size-1-i])
				count++;
		}
		if (count <= 1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
