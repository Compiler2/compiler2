#define NUM_ITER 28

#include <header.h>

int main_bench()
{
	int *a[100];
	int k,*m,*n,i,plus=0,j,l;
	my_scanf("%d",&k);
	m=(int*)malloc(100*sizeof(int));
	n=(int*)malloc(100*sizeof(int));
	for(i=0;i<k;i++)
	{
		my_scanf("%d",m+i);
		my_scanf("%d",n+i);
		a[i]=(int*)malloc(((*(m+i))*(*(n+i)))*sizeof(int));
		for(j=0;j<*(m+i);j++)
		{
			for(l=0;l<*(n+i);l++)
				my_scanf("%d",a[i]+(j*(*(n+i))+l));
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<*(m+i);j++)
		{
			plus=plus+(*(a[i]+(j*(*(n+i)))));
			plus=plus+(*(a[i]+((j+1)*(*(n+i))-1)));
		}
		for(l=1;l<(*(n+i))-1;l++)
		{
			plus=plus+(*(a[i]+l));
			plus=plus+(*(a[i]+l+(*(m+i)-1)*(*(n+i))));
		}
		my_printf("%d\n",plus);
		plus=0;
	}
	return 0;
}