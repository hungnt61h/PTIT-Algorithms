#include <iostream>
#include <string>
#include <string.h>

using namespace std;

const int MAX = 1e7;

bool check[MAX];

int main() {
	ios::sync_with_stdio(false);
	string str;
	cin>>str;
	int n;
	cin>>n;
	memset(check, false, sizeof(check));
	int len = str.length();
	int count = 1, i;
	
	for (i = 0; i < len-1; i++) {
		if (str[i] == str[i+1]) {
			check[(str[i]-96)*count] = true;
			count++;
		} else {
			check[(str[i]-96)*count] = true;
			count = 1;
		}
	}
	if (str[i] == str[i+1]) {
		check[(str[i]-96)*count] = true;
	} else {
		check[(str[i]-96)*count] = true;
	}
	
	while (n--) {
		cin>>i;
		if (check[i])
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	
	return 0;
}
