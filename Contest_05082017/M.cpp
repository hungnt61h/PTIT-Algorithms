#include<iostream>

using namespace std;

const long MAX = 16;s

long c = 0, cost = 9999999;
long graph[MAX][MAX];

void copy_array(long *a, long n) {
    long i, sum = 0;
    for(i = 0; i <= n; i++) 
        sum += graph[a[i % 4]][a[(i + 1) % 4]];
    if (cost > sum)
        cost = sum;
}
 
void permute(long *a, long i, long n) {
   long j, k; 
   if (i == n)
        copy_array(a, n);
   else
        for (j = i; j <= n; j++) {
            swap((a + i), (a + j));
            permute(a, i + 1, n);
            swap((a + i), (a + j));
        }
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		test();
		if (t > 0)
			cout<<endl;
	}
	
//   int i, j;
//   int a[] = {0, 1, 2, 3};  
//   permute(a, 0, 3);
//   cout<<"minimum cost:"<<cost<<endl;
}
