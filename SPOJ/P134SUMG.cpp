#include <iostream>
#include <cmath>

using namespace std;
 
long s[11], b[11], a[11], n, sums = 1, sumb = 0, MIN = 1000000000;
 
void init() {
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>s[i]>>b[i];
}
 
void test() {
    sums = 1;
	sumb = 0;
    bool t = 0, l = 0;
    for(int i = 0; i < n; i++) {
        if (a[i]) {
        	t = 1;
            if (s[i] != 0)
                sums *= s[i];
            sumb += b[i];
        }
    }
    if(t) {
        long d = sums - sumb;
        if (d < 0)
			d = d*(-1);
        if (d < MIN)
			MIN = d;
    }
}
 
void find(int i) {
    for (int j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n-1)
			test();
        else
			find(i+1);
    }
}
 
int main() {
    init();
    if (n == 1) {
        MIN = s[0] - b[0];
        if (MIN < 0)
			MIN *= -1;
        cout<<MIN;
    } else {
        find(0);
        cout<<MIN;
    }
}
