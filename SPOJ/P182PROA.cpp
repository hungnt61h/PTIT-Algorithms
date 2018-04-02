#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int c, v0, v1, a, l;
	cin>>c>>v0>>v1>>a>>l;
	int count = 1, pos = v0, add = v0;
	while (pos < c) {
		add = min(v1, add+a);
		pos += add-l;
		count++;
	}
	cout<<count;
	return 0;
}
