#include <iostream>

using namespace std;

void check(long number) {
	int count1 = 1, count2 = 0;
	long arr[15];
	while (number != 0) {
		arr[count1] = number%10;
		number = number/10;
		count1++;
	}
	count1--;
	for (int i = 1; i <= count1/2; i++) {
		if (arr[i] == arr[count1+1-i])
			count2++;
	}
	if (count2 == (count1/2))
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

int main() {
	int test;
	cin>>test;
	long arr[test];
	for (int i = 0; i < test; i++) {
		cin>>arr[i];
	}
	for (int i = 0; i < test; i++) {
		check(arr[i]);
	}
	return 0;
}
