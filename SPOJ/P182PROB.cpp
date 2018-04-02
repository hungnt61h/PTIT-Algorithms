#include <iostream>
#include <algorithm>

using namespace std;

long long countTriples(long long arr[], long long n) {
    sort(arr, arr+n);
    long long count = 0;
    for (long long i = 0; i < n; i++) 
        if (arr[i] == arr[2])
            count++;
    if (arr[0] == arr[2])
        return ((count-2)*(count-1)*count)/6;
    else if (arr[1] == arr[2])
        return ((count-1)*count)/2;
    return count;
}

int main() {
	ios::sync_with_stdio(false);
	long long n;
	cin>>n;
	long long a[n];
	for (long long i = 0; i < n; i++)
		cin>>a[i];
	cout<<countTriples(a, n);
	return 0;
}
