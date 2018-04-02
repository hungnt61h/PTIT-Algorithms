#include <iostream>

using namespace std;

int main(){
	int n, d, temp, iMax = 0, count = 0;
	int a[50001];
	cin>>n>>d;
	for (int i = 0; i < n; i++) {
		cin>>temp;
		cin>>a[temp];
		if (temp > iMax)
			iMax = temp;
	}
	for (int i = 0; i < iMax+1; i++) {
		if (a[i] != 0) {
			for (int j = i-d; j < i; j++){
				if (j < 0)
					continue;
				if (a[j] >= 2*a[i]) {
					for (int k = i+1; k < i+d+1; k++) {
						if (k > iMax)
							break;
						if (a[k] >= 2*a[i]) {
							count++;
						}
					}
				}
			}
		}
	}
	cout<<count;
	return 0;
}
