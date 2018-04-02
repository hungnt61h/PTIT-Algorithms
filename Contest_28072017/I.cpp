#include <iostream>
#include <string>

using namespace std;

const char B = '#';
const char W = '.';
const int MAX = 110;

int a[2][MAX];
int n;
bool down, up, left;

void print() {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}

void init() {
	cin>>n;
	string s;
	cin>>s;
	for (int i = 0; s[i]; i++)
		if (s[i] == B)
			a[0][i] = 1;
		else
			a[0][i] = 0;
	cin>>s;
	for (int i = 0; s[i]; i++)
		if (s[i] == B)
			a[1][i] = 1;
		else
			a[1][i] = 0;
}

int count() {
	int cnt = 0;
	for
}

void test() {
	init();
	print();
}

int main() {
	test();
	return 0;
}
