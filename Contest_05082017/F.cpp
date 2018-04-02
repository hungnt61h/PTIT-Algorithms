#include <iostream>
#include <vector>

using namespace std;

long topIndex(vector<long> &v, long l, long r, long k) {
    while (r-l > 1) {
	    long m = l + (r-l)/2;
	    if (v[m] >= k)
	        r = m;
	    else
	        l = m;
    }
    return r;
}
 
long count(vector<long> &v) {
    if (v.size() == 0)
        return 0;
    vector<long> t(v.size(), 0);
    long len = 1;
    t[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] < t[0])
            t[0] = v[i];
        else if (v[i] > t[len-1])
            t[len++] = v[i];
        else
            t[topIndex(t, -1, len-1, v[i])] = v[i];
    }
    return len;
}

void test() {
	long n, tmp;
	cin>>n;
	vector<long> vt;
	for (long i = 0; i < n; i++) {
		cin>>tmp;
		vt.push_back(tmp);
	}
	cout<<count(vt);
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
