#include <iostream>
#include <queue>

using namespace std;

priority_queue <long long> q;

const long long MAX = 1000000007;

int main() {
	long long n, num;
	cin>>n;
	for (long i = 0; i < n; i++) {
		cin>>num;
		q.push(-num);
	}
	long long res = 0;
	while (true) {
		long long pos1, pos2, tmp;
		pos1 = -q.top();
		q.pop();
		if (q.empty()) {
			cout<<res;
			return 0;
		}
		pos2 = -q.top();
		q.pop();
		tmp = (pos1 + pos2)%MAX;
		res = (res + tmp)%MAX;
		q.push(-tmp);
	}
	return 0;
}
