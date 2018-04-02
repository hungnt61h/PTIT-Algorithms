#include <iostream>

using namespace std;

bool check(char s[], bool a[], int &length) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		int index = int(tolower(s[i])) - 97;
		if (a[index] == false) {
			a[index] = true;
			count++;
		}
	}
	return (count == 26);
}

int main() {
	int length;
	cin>>length;
	fflush(stdin);
	char *s = new char[length];
	cin>>s;
	bool a[26];
	for (int i = 0; i < 26; i++)
		a[i] = false;
	if (check(s, a, length))
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
