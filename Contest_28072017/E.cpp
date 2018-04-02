#include <iostream>
#include <stack>

using namespace std;

long count(string s) {
	long len = s.length();
	if (len%2)
	   return -1;
	stack<char> st;
	for (long i = 0; i < len; i++) {
	    if (s[i]==')' && !st.empty()) {
	        if (st.top() == '(')
	            st.pop();
	        else
	            st.push(s[i]);
	    }
	    else
	        st.push(s[i]);
	}
	long size = st.size();
	long n = 0;
	while (!st.empty() && st.top() == '(') {
	    st.pop();
	    n++;
	}
	return (size/2 + n%2);
}

int main() {
	int t;
	cin>>t;
	string s;
	while (t--) {
		cin>>s;
		cout<<count(s);
		if (t > 0)
			cout<<endl;
	}
	return 0;
}
