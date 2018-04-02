#include <iostream>
#include <string>

using namespace std;

int convert(char n) {
	switch (n) {
		case '0':
			return 0;
		case '1':
			return 1;
		case '2':
			return 2;	
		case '3':
			return 3;
		case '4':
			return 4;
		case '5':
			return 5;
		case '6':
			return 6;
		case '7':
			return 7;
		case '8':
			return 8;
		case '9':
			return 9;
	}
}

long sumNumber(long num) {
	long sum = 0;
	while (num > 0) {
		sum += num%10;
		num /= 10;
	}
	return sum;
}

int main() {
	string num;
	long count = 0, sum = 0;
	cin>>num;
	for (int i = 0; i < num.length(); i++) {
		sum += convert(num[i]);
	}
	if (num.length() > 1)
		count++;
	while (sum >= 10) {
		sum = sumNumber(sum);
		count++;
	}
	cout<<count;
	return 0;
}
