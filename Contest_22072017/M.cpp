#include <iostream>

using namespace std;
 
long long lt2[51] = {1};
 
long long find (long long level, long long vt) {
	int dau = 1, duoi = lt2[level]-1, giua, retval = level;
	while (dau <= duoi) {
		giua = (dau + duoi)/2;
		if (giua == vt)
			return retval;
		else if (giua > vt)
			duoi = giua - 1;
		else
			dau = giua + 1;
		--retval; 
	}
}
 
int main () {
	for (int i = 1; i <= 50; i++)
		lt2[i] = lt2[i-1]*2;
	long long level, vt, t;
	cin>>t;
	while (t--) {
		cin>>level>>vt;
		cout<<find(level, vt);
		if (t > 0)
			cout<<endl;
	}
	return 0;
}
