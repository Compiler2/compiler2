#define NUM_ITER 46949

#include <header.h>

int main_bench()
{
	int i,j,n,*num,t;
	my_scanf("%d",&n);
	t=n/2;
	num=(int*) malloc (sizeof(int)*n);
	for (i=0;i<n;i++)
		my_scanf("%d",&num[i]);
	for (i=0;i<t;i++)
	{
		j=num[i];
		num[i]=num[n-1-i];
		num[n-1-i]=j;
	}
	for (i=0;i<n;i++)
	{
		my_printf("%d",num[i]);
		if(i<n-1) my_printf(" ");
	}
	free(num);
}