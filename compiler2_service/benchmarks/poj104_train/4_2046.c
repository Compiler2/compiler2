#define NUM_ITER 499

#include <header.h>

int main_bench()
{
	int m,n,i,j,l;
	my_scanf("%d%d",&n,&m);
	int *p[100];
	for(i=0;i<n;i++)
		*(p+i)=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			my_scanf("%d",*(p+i)+j);
	for(i=0;i<m;i++)
	{
		if(i-(n-1)>=0)
		{
		    for(l=0;l<n;l++)			
			    my_printf("%d\n",*(*(p+l)+(i-l)));
		}
		else
		{
			for(l=0;l<=i;l++)
				my_printf("%d\n",*(*(p+l)+(i-l)));
		}
	}
	for(i=1;i<n;i++)
	{
		if(n-i>=m)
		{
			for(l=0;l<m;l++)
				my_printf("%d\n",*(*(p+(i+l))+(m-(1+l))));
		}
		else
		{
			for(l=0;l<n-i;l++)
				my_printf("%d\n",*(*(p+(i+l))+(m-(1+l))));
		}
	}
	return 0;
}