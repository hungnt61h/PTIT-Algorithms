#include <iostream>
#include <string.h>

using namespace std;

int count(long arr[], int n, int k) {
    int f[k];
    memset(f, 0, sizeof(f));

    for (int i = 0; i < n; i++)
        f[arr[i] % k]++;

    if (k % 2 == 0)
        f[k/2] = min(f[k/2], 1);

    int res = min(f[0], 1);

    for (int i = 1; i <= k/2; i++)
        res += max(f[i], f[k-i]);
 
    return res;
}

int main() {
	ios::sync_with_stdio(false);
    int n, k;
    cin>>n>>k;
    long arr[n];
    for (int i = 0; i < n; i++)
    	cin>>arr[i];
    cout<<count(arr, n, k);
    return 0;
}
