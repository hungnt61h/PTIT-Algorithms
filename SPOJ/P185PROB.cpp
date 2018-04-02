#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

pair<int, int> getReducedForm(int dy, int dx) {
    int g = __gcd(abs(dy), abs(dx));

    bool sign = (dy < 0) ^ (dx < 0);
 
    if (sign)
        return make_pair(-abs(dy) / g, abs(dx) / g);
    else
        return make_pair(abs(dy) / g, abs(dx) / g);
}

int minLines(int points[][2], int n, int x0, int y0) {
    set<pair<int, int> > st;
    pair<int, int> temp;
    int minLines = 0;

    for (int i = 0; i < n; i++) {
        temp = getReducedForm(points[i][1] - y0, points[i][0] - x0);

        if (st.find(temp) == st.end()) {
            st.insert(temp);
            minLines++;
        }
    }
 
    return minLines;
}

int main() {
	int n, x0, y0;
	cin>>n>>x0>>y0;
	int points[n][2];
	for (int i = 0; i < n; i++)
		cin>>points[i][0]>>points[i][1];
	cout<<minLines(points, n, x0, y0);
    return 0;
}
