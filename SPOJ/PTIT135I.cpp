#include <iostream>
#include <string>

using namespace std;

void readNumber(string str) {
	int length = str.length();
	int count = 1;
	string result = "";
	for (int i = 0; i < length; i++) {
		if (str[i] == str[i+1])
			count++;
		else {
			cout<<count<<str[i];
			count = 1;
		}
	}
}

int main() {
	int n;
	cin>>n;
	fflush(stdin);
	string test;
	for (int i = 0; i < n; i++) {
		cin>>test;
		readNumber(test);
		if (i != n-1)
			cout<<endl;
	}
	return 0;
}
