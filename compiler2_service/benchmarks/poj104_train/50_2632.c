#define NUM_ITER 743455

#include <header.h>

int main_bench()
{
	int a[12]={0,31,28,31,30,31,30,31,31,30,31,30},b[13]={0},i,j,k,w;
	my_scanf("%d",&w);
	k=(w+5)%7;
	b[1]=k;
	for(i=2;i<=12;i++)
	{
		b[i]=(b[i-1]+a[i-1])%7;
	}
	for(i=1;i<=12;i++)
	{
		if(b[i]==5)
			my_printf("%d\n",i);
	}
	return 0;
}