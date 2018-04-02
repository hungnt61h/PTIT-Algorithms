#include <iostream>
using namespace std;

#define index 100;
#define TRUE 1
#define FALSE 0
typedef int hanhtrinh[100];
typedef int cuocphi[100][100];
int xp,n,t,Min,Max;
char ch;
double t1,t2;
hanhtrinh p,pm;
cuocphi c;
char b[100];
float r;
void init(){
    int i,j;
    for(i = 1; i <= n; i++){
        b[i] = TRUE;
        p[i] = xp;
    }
    Min = c[1][1];
    Max = Min;
    for(i = 1; i <= n; i++){
    	for(j = 1; j <= n; j++){
        	if(c[i][j] < Min)
        		Min = c[i][j];
        	if(c[i][j] > Max)
        		Max = c[i][j];
    	}
    	t = n*Max;
    	b[xp] = FALSE;
    }
}



void Try(int k,int s){
    int i,j,tg;
    for(i = 1; i <= n; i++){
        tg = s+c[p[k-1]][i];
        if((b[i]) && (tg+Min*(n-k) < t)){
            p[k] = i;
            b[i] = FALSE;
            if((k == n)&&(tg+c[i][xp] < t)){
                for(j = 1; j <= n; j++)
                pm[j] = p[j];
                t = tg+c[i][xp];
            }
            else
                if(k < n)
                    Try(k+1, tg);
            b[i] = TRUE;
        }
    }
}

int main(){
    cin >> n;
    xp = 1;
    for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++){
    		cin >> c[i][j];
    	}
    }
    
    init();
    Try(2,0);
    cout << t;
}
