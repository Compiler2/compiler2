#define NUM_ITER 53300

#include <header.h>


int main_bench()
{
    
	int a,c,b,d,n,m,i,x[1000],y[1000];
	my_scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		my_scanf("%d",&x[i]);
		}
	for(i=1;i<=n-m;i++){
		y[i+m]=x[i];
	}
	
	for(i=n-m+1;i<=n;i++){
		y[i-n+m]=x[i];
	}
	for(i=1;i<=n;i++){
		if(i==1)my_printf("%d",y[i]);
		else my_printf(" %d",y[i]);
		}
		


}
