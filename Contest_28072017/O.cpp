#include <iostream>
#include <queue>
#include <string>

using namespace std;

const int N = 8;
const int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
const int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

struct cell {
    int x, y;
    int dis;
};

bool isInside(int x, int y) {
    if (x >= 1 && x <= N && y >= 1 && y <= N)
        return true;
    return false;
}

int findMinStep(int s1, int s2, int d1, int d2) {
    queue<cell> q;
    cell tmp;
    tmp.x = s1;
    tmp.y = s2;
    tmp.dis = 0;
    q.push(tmp);
    int x, y;
    bool visit[N + 1][N + 1];
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            visit[i][j] = false;
    visit[s1][s2] = true;
    while (!q.empty()) {
        tmp = q.front();
        q.pop();
        visit[tmp.x][tmp.y] = true;
        if (tmp.x == d1 && tmp.y == d2)
            return tmp.dis;
        for (int i = 0; i < 8; i++) {
            x = tmp.x + dx[i];
            y = tmp.y + dy[i];
            if (isInside(x, y) && !visit[x][y]) {
            	cell t;
            	t.x = x;
            	t.y = y;
            	t.dis = tmp.dis + 1;
            	q.push(t);
			}
        }
    }
}

void test() {
	string s, d;
	cin>>s>>d;
	cout<<findMinStep(s[0] - 'a' + 1, s[1] - 48, d[0] - 'a' + 1, d[1] - 48);
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
