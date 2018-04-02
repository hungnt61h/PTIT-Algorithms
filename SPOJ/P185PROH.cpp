#include <iostream>
#include <string>

using namespace std;

char cmp(char c1, char c2) {
	return int(c1) > int(c2) ? c1 : c2;
}

bool isPalindrome(string a, int n) {
	int i = n/2;
	while (i--) {
		if (a[i] != a[n-i-1])
			return false;
	}
	return true;
}

int main() {
	int n, k;
	cin>>n>>k;
	string a;
	cin>>a;
	
	if (isPalindrome(a, n) && k == 0) {
		cout<<a;
		return 0;
	}
	if (n < 2 && k != 0) {
		cout<<9;
		return 0;
	}
	
	int count = n/2, i = 0;
	
	while (k != 0 && i < n/2) {
		if (a[i] != a[n-i-1]) {
			k--;
			a[i] = cmp(a[i], a[n-i-1]);
			a[n-i-1] = a[i];
		}
		count--;
		i++;
	}

	if (count == 0) {
		i = 0;
		while (k > 1 && i < n/2) {
			a[i] = '9';
			a[n-i-1] = a[i];
			k -= 2;
		}
		cout<<a;
	} else
		cout<<-1;
	return 0;
}
