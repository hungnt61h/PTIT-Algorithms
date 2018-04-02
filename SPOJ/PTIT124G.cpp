#include <iostream>

using namespace std;

int fr[10005], bk[10005];

int main() {
	int n, x, i, j, tmp;
	cin>>n>>x;
	fr[0] = 0;
	for (i = 0; i <= n+1; i++) {
		fr[i] = i - 1;
		bk[i] = i + 1;
	}
	while (x > 0) {
		cin>>i>>j;
		fr[i+1] = fr[i];
		tmp = fr[j];
		fr[i] = tmp;
		fr[j] = i;
		x--;
		for (int i = 1; i <= n; i++)
			cout<<fr[i]<<" ";
		cout<<endl;
	}
//	for (int i = 1; i <= n; i++)
//		cout<<
	return 0;
}
