#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin>>arr[i];
	
	int m = arr[0];
	int ans = 0;
	for (int j = 0; j < n; j++){
	    m = min(arr[j], m);
	    ans = max(ans, arr[j] - m);
	}
	cout<<ans;
	return 0;
}
