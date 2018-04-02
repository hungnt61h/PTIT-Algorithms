#include <iostream>
#include <string>

using namespace std;

int count(string& s, int n) {
	int count = 0;
	for (int i = 0; i < n-2; i++) {
		if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') {
			count++;
			i += 2;
		}
	}
	return count;
}

int main() {
	int n;
	cin>>n;
	string str;
	cin>>str;
	if (n < 3)
		cout<<"0";
	else {
		cout<<count(str, n);
	}
	return 0;
}
