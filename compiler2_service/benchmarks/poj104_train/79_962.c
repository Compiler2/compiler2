#define NUM_ITER 1682

#include <header.h>

main_bench()
{
	int a[300][2],i,j,s[300]={0},k=1,x=0,p,q;
	for(i=0;;i++)
	{
		my_scanf("%d",&p);
		my_scanf("%d",&q);
		if(p==0)
		{
			break;
		}
		else
		{
			a[i][0]=p;
			a[i][1]=q;
			x=x+1;
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=2;j<=a[i][0];j++)
			s[i]=(s[i]+a[i][1])%j;
		my_printf("%d\n",s[i]+1);
	}
}