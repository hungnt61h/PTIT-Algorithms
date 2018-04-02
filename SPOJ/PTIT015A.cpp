#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool comparator(char i, char j) {
	return (i>j);
}

void generate() {
	string a, b, c;
	cin>>a>>b>>c;
	string sum = a+b+c;
	int l = sum.length();
	sort(sum.begin(), sum.end(), comparator); 
	cout<<sum<<endl;
}

int main() {
	int test;
	cin>>test;
	for (int i = 0; i < n; i++)
		generate();
	return 0;
}
