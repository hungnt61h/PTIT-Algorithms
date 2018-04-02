#include <iostream>

using namespace std;

int main() {
	long m, k, t = 0, i = 0, u;
	cin>>m>>k;
	char s[100002];
	cin>>s;
	long arr[m+2];
	for (long i = 0; i < m; i++)
		arr[i] = i;
	while (s[i] != '.') {
		if(s[i] == 'A')
			t = (t+1)%m;
		else {
			u = (t+1)%m;
			swap(arr[t], arr[u]);
			t = u;
		}
		i++;
	}
	cout<<arr[(t+k-1)%m]<<" "<<arr[(t+k)%m]<<" "<<arr[(t+k+1)%m];
}
