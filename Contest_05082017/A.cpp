#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	long t;
	cin>>t;
	queue<long> q;
	string s;
	while (t--) {
		cin>>s;
		if (s == "PUSH") {
			long x;
			cin>>x;
			q.push(x);
		}
		if (s == "POP" && !q.empty()) {
			q.pop();
		}
		if (s == "PRINTFRONT") {
			if (!q.empty())
				cout<<q.front();
			else
				cout<<"NONE";
			if (t > 0)
				cout<<endl;
		}
	}
	return 0;
}
