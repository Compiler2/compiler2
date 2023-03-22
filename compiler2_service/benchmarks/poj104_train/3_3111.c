#define NUM_ITER 48698

#include <header.h>

int main_bench()
{
	int n,k;
	int *p;
	my_scanf("%d%d",&n,&k);
	p=(int *)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",(p+i));
	}
	int judge=0;
	int j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)+*(p+j)==k)
			{
				judge=1;
				break;
			}
		}
		if(judge)
			break;
	}
	if(judge)
		my_printf("yes");
	else
		my_printf("no");
}
