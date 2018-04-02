#include<iostream>
#include<stack>

using namespace std;

long long getMaxArea(long long h[], long long n) {
    stack<long long> s;
    long long max = 0;
    long long top, atop, i = 0;
    while (i < n) {
        if (s.empty() || h[s.top()] <= h[i])
            s.push(i++);
        else {
            top = s.top();
            s.pop();
            if (s.empty())
            	atop = h[top]*i;
            else
            	atop = h[top]*(i-s.top()-1);
            if (max < atop)
                max = atop;
        }
    }
    while (!s.empty()) {
        top = s.top();
        s.pop();
        if (s.empty())
           	atop = h[top]*i;
        else
           	atop = h[top]*(i-s.top()-1);
        if (max < atop)
            max = atop;
    }
    return max;
}

void test() {
	long long n;
	cin>>n;
	long long h[n];
	for (long long i = 0; i < n; i++)
		cin>>h[i];
	cout<<getMaxArea(h, n);
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
