#define NUM_ITER 56447

#include <header.h>

int main_bench()
{
	int *p,n,i,k,j;
	my_scanf("%d",&n);
	p=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&p[i]);
	}
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(p[i]==k)continue;
		else 
		{
			my_printf("%d",p[i]);
			break;
		}
	}
	for(j=i+1;j<n;j++)
	{
		if(p[j]==k)continue;
		else my_printf(" %d",p[j]);
	}
	free(p);
	return 0;
}
