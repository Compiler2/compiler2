#define NUM_ITER 857977

#include <header.h>

int main_bench()
{
	int x,y;
	int i=0,j=0,k;
	int a[1000],b[1000];
	my_scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
	while(a[i]!=1)
	{
		i=i+1;
		a[i]=a[i-1]/2;
	}
	while(b[j]!=1)
	{
		j=j+1;
		b[j]=b[j-1]/2;
	}

	if(i<=j)
	{
		for(k=0;k<i+1;k++)
		{
			if(a[k]==b[j-i+k])
			{	my_printf("%d",a[k]);
			break;
			}
			
		}
	}
	else
	{
		for(k=0;k<j+1;k++)
		{
			if(a[i-j+k]==b[k])
			{		my_printf("%d",b[k]);
			break;
			}
		}
	}
}
