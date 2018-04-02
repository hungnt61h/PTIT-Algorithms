#include <iostream>
#include <vector>

using namespace std;

long long p, q, n, tmp;
vector<long long> a, m;

void calc(long long a, long long b) {
    if (a == 0 || b == 0)
		return;
    tmp = a/b;
    m.push_back(tmp);
    a -= b*tmp;
    calc(b, a);
}
 
void run() {
    if (n > 1 && a[n-1] == 1){
        a[n-2]++;
        a.pop_back();
        n--;
    }
    m.clear();
    calc(p, q);
    bool ans = true;
    if (a.size() != m.size())
		ans = false;
    for (int i = 0; i < min(a.size(), m.size()); i++)
        ans = ans && (a[i] == m[i]);
    if (ans)
        cout<<"YES";
    else
        cout<<"NO";
}
 
int main() {
	cin>>p>>q>>n;
	for (int i = 0; i < n; i++) {
		cin>>tmp;
		a.push_back(tmp);
	}
	run();
    return 0;
}
