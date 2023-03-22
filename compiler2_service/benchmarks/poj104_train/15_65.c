#define NUM_ITER 606

#include <header.h>


int main_bench()
{
	int n,i,j,a,b,s;
	a=4;
	int p[1000][1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			my_scanf("%d ",&p[i][j]);
			if(p[i][j]==0){
				a++;
			}
			else a=a;
		}
		my_scanf("%d\n",&p[i][n-1]);
	}
	b=a/4;
	s=(b-2)*(b-2);
	my_printf("%d",s);
	return 0;
}

