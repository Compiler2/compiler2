#define NUM_ITER 1320951

#include <header.h>

int b=0;
int main_bench()
{
	int m,n,i,j,k,a[100]={0},I,t;
	my_scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j!=0) k=1;
			else { k=0;break;}
		}
		if(k==1)
		{
			I=0;t=i;
			while(t>0)
			{  I=I*10+t%10;t=t/10;}
			if(I==i)
			{   a[b]=i;b++;}
		}
	}
	if(a[0]==0)
		my_printf("no\n");
	else
	{
		for(i=0;a[i+1]!=0;i++)
		     my_printf("%d,",a[i]);
		my_printf("%d\n",a[i]);
	}
}