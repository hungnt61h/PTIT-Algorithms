#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	while (true) {
		long long s;
		cin>>s;
		if (s == 0)
			break;
		if (s < 1000000)
			cout<<setprecision(20)<<s<<endl;
		else if (s <= 5000000)
			cout<<setprecision(20)<<s*0.9<<endl;
		else
			cout<<setprecision(20)<<s*0.8<<endl;
	}
	return 0;
}
