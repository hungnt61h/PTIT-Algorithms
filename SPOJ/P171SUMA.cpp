#include <iostream>
#include <algorithm>

using namespace std;

struct pos {
	int x, y;
};

bool comparator(pos p1, pos p2) {
	return p1.x < p2.x;
}

int main() {
	int n;
	cin>>n;
	while (n-- > 0) {
		pos rect[4];
		for (int i = 0; i < 4; i++) {
			cin>>rect[i].x>>rect[i].y;
		}
		sort(rect, rect+4, comparator);
		if ((rect[0].x == rect[1].x) && (rect[2].x == rect[3].x) && (rect[1].x != rect[2].x) && (rect[0].y == rect[2].y) && (rect[1].y == rect[3].y) && (rect[0].y != rect[1].y))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
