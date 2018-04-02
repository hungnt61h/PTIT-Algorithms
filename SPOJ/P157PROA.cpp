#include <iostream>
#include <algorithm>

using namespace std;

void chooseNumb() {
	int n;
	cin>>n;
	int num[n], count = 1, luck, max = 0;
	for (int i = 0; i < n; i++)
		cin>>num[i];
	sort(num, num+n);
	for (int i = 0; i < n; i++) {
		if (i == n)
			break;
		if (num[i] == num[i+1])
			count++;
		else {
			if (max < count) {
				max = count;
				luck = num[i];
			}
			count = 1;
		}
	}
	cout<<luck<<endl;
}

int main() {
	int test;
	cin>>test;
	for (int i = 0; i < test; i++) {
		chooseNumb();
	}
	return 0;
}
