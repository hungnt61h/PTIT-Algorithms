#include <iostream>

using namespace std;

unsigned long gcd(unsigned long a, unsigned b) {
    unsigned temp;
    while (b != 0) {
        temp = a % b;
        a = b;
		b = temp;
	}
	return a;
}

unsigned bcd(unsigned long a, unsigned b) {
	return (a*b)/gcd(a, b);
}

int main() {
	unsigned long a[1000], b[1000];
	int index = -1;
	do {
		index++;
		cin>>a[index]>>b[index];
	} while ((a[index] != 0) || (b[index] != 0));
	for (int i = 0; i < index; i++) {
		if (b[i] >= a[i]) {
			cout<<gcd(b[i], a[i])<<" "<<bcd(b[i], a[i])<<endl;
		} else {
			cout<<gcd(a[i], b[i])<<" "<<bcd(a[i], b[i])<<endl;
		}
	}
	return 0;
}
