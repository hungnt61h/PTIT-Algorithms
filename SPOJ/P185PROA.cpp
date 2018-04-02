#include <iostream>
#include <string>

using namespace std;

void run() {
	string str;
	cin>>str;
	int len = str.length(), i;
	for (i = 0; i < len; i++) {
		int c = str[i]-48;
		if (9-c < c) {
			str[i] = char(9-c+48);
		}
	}
	
	for (i = 1; i < len; i++) {
		if (str[i-1] != '0')
			break;
	}
	
	i--;
	while (i < len) {
		cout<<str[i];
		i++;
	}
		
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		run();
	}
	return 0;
}
