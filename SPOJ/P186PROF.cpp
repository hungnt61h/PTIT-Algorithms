#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int countBits(int n) {
    unsigned int count = 0;
    while (n) {
      n &= (n-1) ;
      count++;
    }
    return count;
}

long long count(int arr[], int n, int k) {
	int MAX = *max_element(arr, arr+n);

	long long count[MAX+1];
	memset(count, 0, sizeof(count));

	for (int i=0; i < n; i++)
		count[arr[i]]++;

	long long ans = 0;

	if (k == 0) {
		for (int i = 0; i <= MAX; i++)
			ans += (count[i] * (count[i] - 1)) / 2;
		return ans;
	}

	for (int i = 0; i <= MAX; i++) {
		if (!count[i])
			continue;

		for (int j = i+1; j <= MAX; j++) {
			if (countBits(i ^ j) == k)
				ans += count[i] * count[j];
        }
    }
    return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k;
	cin>>n>>k;
	int a[n];
	for (int i = 0; i < n; i++)
		cin>>a[i];
	
	cout<<count(a, n, k);
	return 0;
}
