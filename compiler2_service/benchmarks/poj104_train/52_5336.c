#define NUM_ITER 55240

#include <header.h>

int main_bench()
{
	int Z[100],n,m,i;
	int *p;
	p=Z;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{my_scanf("%d",&Z[i]);}
	for(i=0;i<m;i++)
	{my_printf("%d ",*(p+n-m+i));}
	for(i=0;i<n-m;i++)
	{my_printf("%d",*(p+i));if(i<n-m-1) my_printf(" ");}
	return 0;
}
