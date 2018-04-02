#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
const int TRUE=1;
const int FALSE=0;
int prime[100001];
void nhap()
{
	int i;
	for ( i=1; i <= 100000; i++) prime[i]=TRUE;
    prime[1]=FALSE;
    int k=0,m=sqrt(100000),j;
    while (k<m)
    {
        i=k+1;                    
        while (prime[i]==FALSE) i++;
        k=i;
        j=2;
        prime[k]=TRUE;
        while (k*j<=100000)
        {
            prime[k*j]= FALSE;
            j++;
        }
    }
}
int chuyen( char x)
{
	return x - 48;
}
int main()
{
	char s[300];
	nhap();
	gets(s);
	int max = 0;
	int sum;
	while(1)
	{
		if(s[0] == '0' && strlen(s) == 1) break;
		for(int i = 0 ; i < strlen(s) ; i++)
		{
			int count = 1;
			sum = chuyen(s[i]);
			if(prime[chuyen(s[i])] == TRUE && chuyen(s[i]) > max ) max = chuyen(s[i]);
			for(int j = i +1;j < strlen(s); j++)
			{
				sum = sum * 10 + chuyen(s[j]) ;
				if( prime[sum] == TRUE && sum > max ) max = sum;
				count++;
				if( count == 5) break;
			}
		}
	
		cout<<max<<endl;
		max = 0;
		gets(s);

	}
	return 0;
}
