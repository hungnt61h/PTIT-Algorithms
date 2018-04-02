#include <iostream>
#include <stack>
#include <string.h>
#include <algorithm>

using namespace std;

const int MAX = 502;

int a[MAX][MAX];

long maxRow(int row[], int m) {
    stack<long> res;
    long top, maxA = 0, area = 0, i = 0;
    while (i < m) {
        if (res.empty() || row[res.top()] <= row[i])
            res.push(i++);
        else {
            top = row[res.top()];
            res.pop();
            area = top*i;
            if (!res.empty())
                area = top*(i - res.top() - 1 );
            maxA = max(area, maxA);
        }
    }
    while (!res.empty()) {
        top = row[res.top()];
        res.pop();
        area = top*i;
        if (!res.empty())
            area = top*(i - res.top() - 1 );
        maxA = max(area, maxA);
    }
    return maxA;
}

long maxRect(int n, int m) {
    long result = maxRow(a[0], m);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (a[i][j])
				a[i][j] += a[i - 1][j];
        result = max(result, maxRow(a[i], m));
    }
    return result;
}

void test() {
	int n, m;
	cin>>n>>m;
	memset(a, 0, sizeof(a));
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin>>a[i][j];
	cout<<maxRect(n, m);
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
