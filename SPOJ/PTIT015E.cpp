#include <iostream>

#define MAX 1000001

using namespace std;

long long sum[MAX];
long long num[MAX];
long long sumDiv[MAX];
long long numDiv[MAX];

void generate() {
    sum[0] = 0;
    num[0] = 0;
    for (long i = 1; i < MAX; i++) {
        for(long j = i; j < MAX; j += i) {
            sum[j] += i;
            num[j]++; 
        }
        sumDiv[i] += (sumDiv[i-1] + sum[i]);
        numDiv[i] += (numDiv[i-1] + num[i]);
    }
}

int main(){
    generate();
    long k, a, b;
    cin>>k;
    while (k--) {
        cin>>a>>b;
        if ((a == 0) && (b == 0)) {
            cout<<"0 0"<<endl;
            continue;
        }
        cout<<numDiv[b] - numDiv[a-1]<<" "<<sumDiv[b] - sumDiv[a-1]<<endl;
    }
    return 0;
}
