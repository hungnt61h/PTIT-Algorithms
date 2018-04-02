#include <iostream>

using namespace std;

int main() {
	int num[3000], factor;
	for (int i = 0; i < 3000; i++) {
		num[i] = 0;
	}
	num[2999] = 1;
	for (factor = 2; factor <= 1000; factor++) {
		int total = 0, carry = 0, index = 2999;
		while (index > 0) {
	    	total = num[index]*factor + carry;
	      	carry = 0;
			if (total > 9) {
				num[index] = total%10;
				carry = total/10;
			} else
				num[index] = total;
	      	index--;
		}
	}
	for (int i = 432; i < 3000; i++)
		if (num[i] >= 0) {
			cout<<num[i];
		}
	return 0;
}