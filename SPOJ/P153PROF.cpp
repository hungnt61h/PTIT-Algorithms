#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    long a[n], b[n], count = 0;
    long indexA = n-1;
    long indexB = n-1;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
        cin>>b[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    while ((indexB > -1) && (indexA > -1)) {
        if (b[indexB] > a[indexA]) {
            count++;
            indexB--;
            indexA--;
        } else
            indexA--;
    }
    cout<<count;
}
