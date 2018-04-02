#include <iostream>

using namespace std;

int main() {
	long long t, a[5], i, j, k, l, n, s;
	cin>>t;
	while (t > 0) {
		cin>>n;
		cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
		s = 0;
		for (i = 0; i < 5; i++)
			s += n/a[i];
		for (i = 0; i < 4; i++)
			for (j = i + 1; j < 5; j++)
				s -= n/(a[i]*a[j]);
		for (i = 0; i < 3; i++)
			for (j = i + 1; j < 4; j++)
				for (k = j + 1; k < 5; k++)
					s += n/(a[i]*a[j]*a[k]);
		for (i = 0; i < 2; i++)
			for (j = i + 1; j < 3; j++)
				for (k = j + 1; k < 4; k++)
					for (l = k + 1; l < 5; l++)
						s -= n/(a[i]*a[j]*a[k]*a[l]);
		s += n/(a[0]*a[1]*a[2]*a[3]*a[4]);
		cout<<n-s;
		if (t > 1) cout<<endl;
		t--;
	}
}
