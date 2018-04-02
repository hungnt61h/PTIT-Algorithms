#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin>>t;
	while (t-- > 0) {
		fflush(stdin);
		string s;
		cin>>s;
		int size = s.length();
		sort(s.begin(), s.end());
		int odd = 0, count = 1;
		for (int i = 0; i < size-1; i++) {
			if (s[i] == s[i+1])
				count++;
			else {
				if (count%2 != 0)
					odd++;
				count = 1;
			}
		}
		if (count%2 != 0)
			odd++;
		if (odd <= 3)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
