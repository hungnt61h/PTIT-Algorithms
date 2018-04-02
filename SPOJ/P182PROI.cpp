#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll count(ll n) {
    ll count = 1;
    while(n) {
    	if (!(n&1))
			count *= 2;
        n >>= 1;
    }
    return count;
}

int main() {
    ll n;
    cin>>n;
    assert(0 <= n and n <= 1000000000000000ll);
    cout<<count(n)<<endl;
    return 0;
}
