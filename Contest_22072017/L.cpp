#include <iostream>

using namespace std;

const long long MAX = 123456789;

void count() {
	long long n;
	cin>>n;
	if (n == 1) {
   		cout<<"1";
	} else {
    	--n;
    	long long ans = 1;
    	long long t = 2;
    	while (n > 0) {
      		if (n%2)
			  	ans = (ans * t) % MAX;
      		t = (t * t) % MAX;
      		n /= 2;
   		}
    	cout<<ans;
  	}
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		count();
		if (t > 0)
			cout<<endl;
	}
} 
