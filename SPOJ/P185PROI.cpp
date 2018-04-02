#include <iostream>

using namespace std;

long long count(long long x) {
    long long count = 0, n = 1;

    while (x != 0) {
        if (x%2 == 0)
            count += n;
        n <<= 1;
        x >>= 1;
    }

    return count;
}

void run() {
	long long x;
	cin>>x;
	cout<<count(x)<<endl;
}

int main() {
	int T;
	cin>>T;
	while(T--) {
		run();
	}
    return 0;
}
