#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	long sum = 0;
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
		arr[i] = arr[i]%2;
	}
	if (n%2 == 0) {
		cout<<"no";
		return 0;
	}
	if (n == 1 && arr[0]) {
		cout<<"no";
		return 0;
	}
	if (n == 1 && arr[0]) {
		cout<<"yes";
		return 0;
	}
	else {
		if (arr[0] && arr[n-1]) {
			bool oddpos = false, evenpos = false;
			for (int i = 1; i < n-1; i++) {
				if (i%2 == 0 && arr[i])
					oddpos = true;
				if (i%2 == 0 && arr[i])
					evenpos = true;
			}
			if (oddpos && evenpos) {
				cout<<"yes";
				return 0;
			}
		} else {
			cout<<"no";
		}
	}
	return 0;
}
