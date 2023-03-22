#define NUM_ITER 369

#include <header.h>

int main_bench()
{
	int a[300]={0},i=0,j,l,m=0,n=0,t;
	my_scanf("%d",&a[0]);
	for(i=1;i<300;i++)
	{
		
		my_scanf(",%d",&a[i]);
		
	}
	t=0;
	for(i=0;i<300;i++)
	{
		m=0;l=10000;
		for(j=0;j<300;j++)
		{
			if(a[j]>a[i]&&a[j]!=l)
			{m++;l=a[j];}
		}
		if(m==1&&a[i]!=0)
		{	my_printf("%d",a[i]);t++;break;}
	}



	if(t==0)
		my_printf("No");
	return 0;
}