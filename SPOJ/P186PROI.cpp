#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n, k, i;
	cin>>n>>k;
	int len = n+k-1;
	string s;
	cin>>s;
	char last = s[len-1];
	vector<char> res;
	res.push_back(s[0]);
	int num1 = 0;
	if (s[0] == '1')
		num1++;
	
	char tmp;
	for (i = 1; i < k; i++) {
		if (s[i] == '0') {
			if (num1%2 == 0)
				tmp = '0';
			else
				tmp = '1';
		} else {
			if (num1%2 == 0)
				tmp = '1';
			else
				tmp = '0';
		}
		if (tmp == '1')
			num1++;
		res.push_back(tmp);
	}

	int j = 0;
	while (i < n) {
		if (res[j] == '1')
			num1--;
		if (s[i] == '0') {
			if (num1%2 == 0)
				tmp = '0';
			else
				tmp = '1';
		} else {
			if (num1%2 == 0)
				tmp = '1';
			else
				tmp = '0';
		}
		if (tmp == '1')
			num1++;
		res.push_back(tmp);
		i++;
		j++;
	}
	
	res.push_back(last);
	for (i = 0; i < n; i++)
		cout<<res[i];
	return 0;
}
