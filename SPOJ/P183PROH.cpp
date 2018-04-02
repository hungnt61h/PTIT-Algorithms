#include <iostream>
#include <algorithm>

using namespace std;

bool isEqual(int a, int b, int c) {
	if (a == b && b == c)
		return true;
	else
		return false;
}

int minVal(int a, int b, int c) {
	return min(min(a, b), c);
}

int main() {
	int n1, n2, n3;
	cin>>n1>>n2>>n3;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	int a1[n1], a2[n2], a3[n3];
	for (int i = 0; i < n1; i++) {
		cin>>a1[i];
		sum1 += a1[i];
	}
	for (int i = 0; i < n2; i++) {
		cin>>a2[i];
		sum2 += a2[i];
	}
	for (int i = 0; i < n3; i++) {
		cin>>a3[i];
		sum3 += a3[i];
	}
	int p1 = 0, p2 = 0, p3 = 0;
	int min;
	while (true) {
		min = minVal(sum1, sum2, sum3);
		while (sum1 > min) {
			sum1 -= a1[p1];
			p1++;
		}
		while (sum2 > min) {
			sum2 -= a2[p2];
			p2++;
		}
		while (sum3 > min) {
			sum3 -= a3[p3];
			p3++;
		}
		if (isEqual(sum1, sum2, sum3))
			break;
	}
	cout<<min;
	return 0;
}
