#define NUM_ITER 5227

#include <header.h>

int main_bench()
{
	int m,n,i,j;
	double sum[100];
	my_scanf("%d",&m);
	for(i=0;i<m;i++)
		sum[i]=0;
	

	for(i=0;i<m;i++){
        my_scanf("%d",&n);
		int a=2;
		int b=1;
	
		for(j=0;j<n;j++){
		sum[i]+=1.0*a/b;
		a=a+b;
		b=a-b;
		}
		my_printf("%.3lf\n",sum[i]);
	
	}
	
	return 0;
}
