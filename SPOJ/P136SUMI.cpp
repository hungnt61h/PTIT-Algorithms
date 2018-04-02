#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
	bool b[365];
	int n, k, t;
	cin>>n>>k;
	b[0] = true;
	for (int i = 1; i <= n; i++) {
    	cin>>t;
	    vector<int> v;
	    int e = 0;
	    for (int j = 1; j < 360; j++) {
	    	e += t;
	    	if (e >= 360)
				e -= 360;
	    	v.push_back(e);
	    }
	    for (int j = 0; j <= 359; j++) {
	    	if (b[j]) {
	        	for (int p = 0; p < v.size(); p++)
	        		b[(j + v[p]) % 360] = true;
	        	}
	    }
	}
	while (k--) {
    	cin>>t;
    	if (b[t])
    		cout<<"YES";
    	else
    		cout<<"NO";
	}
} 
