#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	int n, m, d, MIN = 2e9;
	cin>>n>>m>>d;

	int a[n*m];
	bool flag = true;
	for (int i = 0; i < n*m; i++){
		cin>>a[i];
		if (MIN > a[i])
			MIN = a[i];
	}

	for (int i = 0; i < n*m && flag; i++){
		a[i] -= MIN;
		if (a[i]%d != 0 )
			flag = false;
		else
			a[i] /= d;
	}
	
	if (!flag)
		cout<<"-1";
	else {
		sort(a, a+n*m);
		int mid = n*m/2;
		int ans = 0;
		for (int i = 0; i < m*n; i++)
			ans += abs( a[i] - a[mid]);
		cout<<ans;
	}

	return 0;
}
