#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double a, b, c;
	cin>>a>>b>>c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0)
				cout<<"-1";
			else
				cout<<"0";
		} else
			printf("1\n%.5lf", 0 - c/b);
	} else {
		double d = b*b - 4*a*c;
		if (d > 0) {
			double x1 = (0 - b + sqrt(d))/(2*a);
			double x2 = (0 - b - sqrt(d))/(2*a);
			if (x1 > x2)
				printf("2\n%.5lf\n%.5lf", x2, x1);
			else
				printf("2\n%. 5lf\n%.5lf", x1, x2);
		} else if (d == 0) {
			printf("1\n%.5lf", 0 - b/(2*a));
		}
		else
			cout<<"-1";
	}
	return 0;
}
