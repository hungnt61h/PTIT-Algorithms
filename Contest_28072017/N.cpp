#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

const int MAX = 20;
double m[MAX][MAX+1];
int n;

void swapRow(int i, int j) {
    for (int k = 0; k <= n; k++) {
        double temp = m[i][k];
        m[i][k] = m[j][k];
        m[j][k] = temp;
    }
}

void sub() {
    double x[n];
    for (int i = n-1; i >= 0; i--) {
        x[i] = m[i][n];
        for (int j = i+1; j < n; j++)
            x[i] -= m[i][j]*x[j];
        x[i] = x[i]/m[i][i];
    }
    for (int i = 0; i < n; i++)
        printf("%0.3lf ", x[i]);
}

int eliminate() {
    for (int k = 0; k < n; k++) {
        int imax = k;
        int vmax = m[imax][k];
        for (int i = k+1; i < n; i++)
            if (abs(m[i][k]) > vmax)
                vmax = m[i][k], imax = i;
        if (!m[k][imax])
            return k;
        if (imax != k)
            swapRow(k, imax);
        for (int i = k+1; i < n; i++) {
            double f = m[i][k]/m[k][k];
            for (int j = k+1; j <= n; j++)
                m[i][j] -= m[k][j]*f;
            m[i][k] = 0;
        }
    }
    return -1;
}

void solve() {
    if (eliminate() != -1) {
            cout<<"-1";
        return;
    }
    sub();
}

void test() {
	memset(m, 0, sizeof(m));
	cin>>n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin>>m[i][j];
	for (int i = 0; i < n; i++)
		cin>>m[i][n];
	solve();
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		test();
		if (t > 0)
			cout<<endl;
	}
    return 0;
}
