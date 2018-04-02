#include <iostream>
#include <string>

using namespace std;

bool check (long a, long b, string c) {
	long x[101], y[101], x0 = 0, y0 = 0;
	int l = c.length();
	for (int i = 0; i < l; i++) {
		switch (c[i]) {
			case 'U': {
				y0++;
				break;
			}
			case 'D': {
				y0--;
				break;
			}
			case 'L': {
				x0--;
				break;
			}
			case 'R': {
				x0++;
				break;
			}
		}
		x[i] = x0;
		y[i] = y0;
	}
	if ((x[l-1] == 0) && (y[l-1] == 0)) {
		for (int i = 0; i < l; i++) {
			if ((a == x[i]) && (b == y[i]))
				return true;
		}
	} else if ((x[l-1] == 0) && (y[l-1] != 0)) {
		for (int i = 0; i < l; i++) {
			long _x = a-x[i];
			long _y = b-y[i];
			if ((_y%y[l-1] == 0) && (_x == x[i]))
				return true;
		}
	} else if ((x[l-1] != 0) && (y[l-1] == 0)) {
		for (int i = 0; i < l; i++) {
			long _x = a-x[i];
			long _y = b-y[i];
			if ((_x%x[l-1] == 0) && (_y == y[i]))
				return true;
		}
	} else {
		for (int i = 0; i < l; i++) {
		long _x = a-x[i];
		long _y = b-y[i];
		if ((_x/x[l-1] == _y/y[l-1]) && (_x%x[l-1] == 0))
			return true;
		}
	}
	return false;
}

int main() {
	long a, b;
	cin>>a>>b;
	string c;
	cin>>c;
	if (check(a, b, c))
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
