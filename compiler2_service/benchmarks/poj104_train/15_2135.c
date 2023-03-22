#define NUM_ITER 650

#include <header.h>

int main_bench()
{
	int n,i,j,pi=0,pj,r=0,a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(pj=0,j=0;j<n;j++)
		{
			my_scanf("%d",&a);
			if(a==0){pj++;r++;}
		}
		if(pj!=0)pi++;
	}
	my_printf("%d",(r/2-pi)*(pi-2));
}
