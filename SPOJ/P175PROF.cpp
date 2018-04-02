#include <iostream>
#include <string>

using namespace std;

void test() {
	string s;
	cin>>s;
	int x = 0, y = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'x')
			x++;
		else
			y++;
	}
	if (x > y)
		for (int i = 0; i < (x - y); i++)
			cout<<"x";
	else
		for (int i = 0; i < (y - x); i++)
			cout<<"y";
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	for (int i = 0; i < t; i++)
		test();
	return 0;
}
