#define NUM_ITER 1913525

#include <header.h>

int main_bench()
{
	int a[300],i,j,k,t;
    for(i=0;i<300;i++)
	{
		my_scanf("%d",&a[i]);
		if(getchar()!=',')break;
	}
	if(i==0) my_printf("No\n");
	else
	{
	for(j=0;j<i+1;j++)
	{
		for(k=0;k<i-j;k++)
		{
			if(a[k]<a[k+1])
			{
				t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
			}
		}
	}
	for(j=0;j<i;j++)
	{
	    if(a[j]!=a[j+1])
		break;
	}
	if(j==i) my_printf("No\n");
	else
	my_printf("%d\n",a[j+1]);
	}

}