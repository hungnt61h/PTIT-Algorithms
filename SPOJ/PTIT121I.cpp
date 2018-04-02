#include <iostream>
#include <string>

using namespace std;

int main() {
	int test;
	cin>>test;
	for (int i = 0; i < test; i++) {
		int n, m;
		cin>>n>>m;
		string str;
		cin>>str;
		fflush(stdin);
		cout<<i+1<<" ";
		for (int j = 0; j < str.length(); j++) {
			for (int k = 0; k < m; k++)
				cout<<str[j];
		}
		cout<<endl;
	}
	return 0;
}
