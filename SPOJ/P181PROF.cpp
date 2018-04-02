#include <iostream>
#include <vector>

using namespace std;

struct node {
	vector<int> child;
	long v;
	long long s;
};

node[1000005];

void addNode() {
	long p, v;
	
}

int main() {
	long v1, q;
	cin>>v1>>q;
	node[1].v = v1;
	long type;
	while (q > 0) {
		cin>>type;
		if (type == 1) {
			addNode();
		} else {
			
		}
		q--;
	}
	return 0;
}
