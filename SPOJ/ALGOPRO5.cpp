#include <iostream>
#include <cmath>

using namespace std;

int main() {
	unsigned long long res = 0;
	int n;
	cin>>n;
	for (int i = 1; i <= n; i++)
		res += pow(2, i);
	cout<<res;
	return 0;
}