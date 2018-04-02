#include <iostream>
#define ull unsigned long long

using namespace std;

ull sumDigits(ull n) {
    ull res = 0;
    while (n > 0) {
        res += n%10;
        n /= 10;
    }
    return res;
}

void solve(ull n, ull s) {
    if (n-sumDigits(n) < s) {
        cout<<0;
        return;
    }

    ull left = 0, right = n;
    while (left < right) {
        ull mid = left + (right - left)/2;
        if (mid - sumDigits(mid) >= s)
            right = mid;
        else
            left = mid + 1;
    }
    cout<<n - left + 1;
}

int main() {
	ull n, s;
	cin>>n>>s;
	solve(n, s);
	return 0;
}
