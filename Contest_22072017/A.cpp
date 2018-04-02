#include <iostream>
#include <string>

using namespace std;

void test() {
	string s;
	cin>>s;
	s += ".";
	int size = s.length();
	int count = 1;
	for (int i = 0; i < size-1; i++) {
		if (s[i] == s[i+1])
			count++;
		else {
			cout<<count<<s[i];
			count = 1;
		}
	}
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
