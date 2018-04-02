#include <iostream>

using namespace std;

int main() {
	int n, s, f, result;
    cin>>n;
    int zone[n+1];
    for(int i = 1; i <= n; i++) 
        cin>>zone[i];
    cin>>s>>f;
    int sum = 0, max = 0;
    for (int i = 1; i <= f-s; i++) 
        sum += zone[i];
    max = sum;
    result = s;
    for (int i = 2; i <= n; i++){
        int end = i+f-s-1;
        if (end > n)
        	end -= n;
        sum -= zone[i-1];
        sum += zone[end];
        int t = i-1;
        if (sum > max) {
            max = sum;
            if (s-t <= 0)
            	result = s-t+n;
            else
            	result = s-t;
        } else if (sum == max){
        	if (s-t <= 0)
        		result = min(result, s-t+n);
        	else
        		result = min(result, s-t);
        }
    }
	cout<<result;
	return 0;
}
