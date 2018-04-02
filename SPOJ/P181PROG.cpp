#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

bool comparator (int i, int j) {
	return i > j;
}

long count(string &str1, string &str2, int len1, int len2, int k) {
	int table[len1][len2];
	memset(table, 0, sizeof(table));
	vector<int> result;
	
}

int main() {
	int k, len1, len2;
	cin>>len1>>len2>>k;
	string str1, str2;
	cin>>str1>>str2;
	
    cout<<count(str1, str2, len1, len2, k);
    return 0;
}
