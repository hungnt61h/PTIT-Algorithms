#include <iostream>
#include <string>

using namespace std;

int main() {
	string src;
	cin>>src;
	int hour = (src[0]-48)*10+src[1]-48;
	int p = (src[8] == 'P' ? 1 : 0);
	if (hour > 0 && hour < 12 && p) {
		hour += 12*p;
		src[0] = hour/10+48;
		src[1] = hour%10+48;
	}
	if (hour == 12 && !p) {
		src[0] = 48;
		src[1] = 48;
	}
	for (int i = 0; i < 8; i++)
		cout<<src[i];
	return 0;
}
