#include <iostream>
#include <string.h>
#include <string>

using namespace std;

bool dd[5001][5001];

int pal(const char *s) {
    int n = strlen(s);    
    memset(dd, 0, sizeof(dd));
    int count = 1;
    for (int i = 0; i < n; ++i)
        dd[i][i] = true;
    int st = 0;
    for (int i = 0; i < n-1; i++) {
        if (s[i] == s[i+1]) {
            dd[i][i+1] = true;
            st = i;
            count = 2;
        }
    }
    for (int k = 3; k <= n; k++) {
        for (int i = 0; i < n-k+1; i++) {
            int j = i + k - 1;
            if (dd[i+1][j-1] && s[i] == s[j]) {
                dd[i][j] = true;
                if (k > count) {
                    st = i;
                    count = k;
                }
            }
        }
    }
    return count;
}

void test() {
	string s;
	cin>>s;
	cout<<pal(s.c_str());
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
