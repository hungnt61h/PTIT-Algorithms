#include<iostream>
using namespace std;
  
bool xl(char *x)
{
    char Stack[100001];
    int T=-1;
    for(;*x;x++)
    {
        if(*x=='[' || *x=='(' || *x=='{' ) {T++; Stack[T]=*x;}
        else if(*x==')') 
        {
            if(T<0) return false;
            if(Stack[T]!='(') return false;
            T--;
        }
        else if(*x==']') 
        {
            if(T<0) return false;
            if(Stack[T]!='[') return false;
            T--;
        }
		else if(*x=='}'){
			if(T<0) return false;
            if(Stack[T]!='{') return false;
            T--;
		}   
    }
    if(T==-1) return true;
    return false;
}
  
int main()
{
    char x[100001];
    int T=0;
    bool A[25];
    int t;
    cin>>t;
    while(t--){
    	cin>>x;
    	T++;
    	A[T]=xl(x);
    	if(A[T]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
    }
    
}
