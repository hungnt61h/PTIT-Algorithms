#include <iostream>
#include <algorithm>
using namespace std;
	int a[1000001]= {};
	int b[1000001]= {};
void quickSort(int a[], int b[], int l , int r)
{
	
	if (l <= r)
	{
		int key = b[(l+r)/2];
		int i = l;
		int j = r;
 
		while (i <= j)
		{
			while (b[i] < key)
				i++;
			while (b[j] > key)
				j--;
 
			if (i <= j)
			{
				swap(b[i], b[j]);
				swap(a[i], a[j]);
				i++;
				j--;
			}
		}
		if (l < j)
			quickSort(a ,b, l, j);
		if (r > i)
			quickSort(a ,b, i, r);
	}
}
main()
{
	int test,n;
	cin>>test;
	while( test --)
	{
		cin>>n;
		for(int i = 1 ; i <= n ; i++)
		{
			cin>>a[i]>>b[i];
		}
		quickSort(a,b,1,n);
		int i = 1, count= 0 ;
		for(int j = 2 ; j <= n ; j++)
		{
			if(a[j] >= b[i])
			{
				count++;
				i = j;
			}
		}
		cout<<count+1<<endl;
	}
}
