#define NUM_ITER 503

#include <header.h>

int main_bench()
{
    int p[1000][1000];
	int n;
	my_scanf("%d",&n);
	int i,j;
	int m=0;
	int l=0;
	int t=0;
	int L,h,S;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
		int x;
		my_scanf("%d",&x);
		p[i][j]=x;
	}
	}
    int a,b;
	for (a=0;a<n;a++){
		if(p[a][0]!=0){
		for (b=1;b<n;b++){
		if(p[a][b]==0)
			m=m+1;
		if(p[a][b]!=p[a][b-1])
			l=l+1;
		}
		h=(l-4)/4;
		L=(m-2*h-4)/2;
		}
		else{
		for (b=0;b<n;b++){
		if(p[a][b]==0)
			m=m+1;
		if(p[a][b]!=p[a][b+1])
			l=l+1;
		}
		h=(l-4)/3;
		L=(m-2*h-4)/2;
		}
	} 
    S=h*L;
	my_printf("%d",S);
	return 0;
}