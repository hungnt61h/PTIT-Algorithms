#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	long n, m, i = 0, j = 0;
	cin>>n>>m;
	long a[n], b[m], tmp[m], num[m];
	for(i = 0; i < n; i++)
		cin>>a[i];
	for(i = 0; i < m; i++){
		cin>>b[i];
		tmp[i] = b[i];
	}
	sort(a, a+n);
	sort(b, b+m);
	j = 0;
	i = 0;
	while (j < m){
		while ((a[i] <= b[j]) && (i < n))
			i++;
		num[b[j]] = i;
		j++;
	}
	for (i = 0; i < m; i++){
		cout<<num[tmp[i]]<<endl;
	}
	return 0;
}
