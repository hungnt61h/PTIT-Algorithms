#include <iostream>

using namespace std;

void devide() {
	int a, b;
	if (a > b) {
		if (a%b == 0)
			cout<<a/b<<".0"<<endl;
			
	}
}

int main() {
	int test;
	cin>>test;
	for (int i = 0; i < test; i++) {
		devide();
	}
	return 0;
}
