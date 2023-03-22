#define NUM_ITER 9922

#include <header.h>

int main_bench()
{
	int n,k[300]={99999},i,j,b,p,u=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&p);
		b=1;
		for(j=0;j<u;j++)
			if(k[j]==p) {b=0;break;}
			if(b) {k[u]=p;u++;}
	}
	for(j=0;j<u-1;j++)
		my_printf("%d,",k[j]);
	my_printf("%d",k[u-1]);
	return 0;
}