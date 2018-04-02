#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
    	int k;
    	cin>>k;
    	string s;
    	cin>>s;
    	int n = s.length();
    	cout<<k;
		if (next_permutation(s.begin(), s.end()))
    		cout<<" "<<s<<endl;
    	else
    		cout<<" BIGGEST"<<endl;
    }
}
