#include<bits/stdc++.h>

using namespace std;

int L[1002][1002];

int max(int a, int b) {
    return (a > b) ? a : b;
}

int count(string s, string t) {
	int m = s.length();
	int n = t.length();
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 || j == 0)
				L[i][j] = 0;
			else if (s[i-1] == t[j-1])
				L[i][j] = L[i-1][j-1] + 1;
			else
				L[i][j] = max(L[i-1][j], L[i][j-1]);
		}
	}
	return L[m][n];
}

void test() {
	string s, t;
	cin>>s>>t;
	cout<<count(s, t);
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
