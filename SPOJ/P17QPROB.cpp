#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool comparator(string s1, string s2 ) {
    return (s1 + s2) < (s2 + s1);
}

int main() {
	int t, size;
	cin>>t;
	while (t > 0) {
		cin>>size;
		string str[size];
		for (int i = 0; i < size; i++)
			cin>>str[i];
		sort(str, str+size, comparator);
		for (int i = 0; i < size; i++)
			cout<<str[i];
		if (t > 1)
			cout<<endl;
		t--;
	}
	return 0;
}
