#include <iostream>
#include <math.h>

using namespace std;

long countDivisors(long a, long b) {
    long count = 0;
	long n = a - b;
	long s = sqrt(a - b);
    for (long i = 1; i <= s; i++) {
        if (n % i == 0) {
            if (n/i > b)
                count++;
            if (i > b)
                count++;
        }
    }
    if (s*s == a-b && s > b)
        count--;
    return count;
}

int main() {
    long a, b;
    cin>>a>>b;
    if (a == b) {
    	cout<<"infinity";
	} else if (a < b) {
    	cout<<"0";
	} else
    	cout<<countDivisors(a, b);
    return 0;
}
