#define NUM_ITER 2927

#include <header.h>

int main_bench()
{
	int c[10001],i,j,p,n,min,max,a,b;
	min=10000;
	max=0;
	for(i=0;i<10001;i++)
		c[i]=1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if(a<min)
			min=a;
		if(b>max)
			max=b;
		for(j=a+1;j<b;j++)
		{
			c[j]=0;
		}
		if(c[a]==1)
			c[a]=2;
		else if(c[a]==2)
			c[a]=0;
		if(c[b]==1)
			c[b]=2;
		else if(c[b]==2)
			c[b]=0;
	}
	for(p=min+1;p<max;p++)
	{
		if(c[p]!=0)
			break;
	}
	if(p==max)
		my_printf("%d %d",min,max);
	else if(p<max)
		my_printf("no");
}