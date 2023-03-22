#define NUM_ITER 16662

#include <header.h>

int main_bench()
{
	int a[1111],b[1111],m[1110]={0},n,w,max=0,j,i=-1;
	char c=',';
	while (c==',')
	{
		i++;
		my_scanf("%d",&a[i]);
		c=getchar();
	}
	w=i+1;
	c=',';
	i=-1;
	while (c==',')
	{
		i++;
		my_scanf("%d",&b[i]);
		c=getchar();
	}	
	for (n=0;n<=999;n++)
	{
		for (j=0;j<=i;j++)
		{
			if ((n>=a[j])&&(n<b[j]))
				m[n]++;
		}
	}
	for (n=0;n<=999;n++)
	{
		if (m[n]>max)
			max=m[n];
	}
	my_printf("%d ",w);
	my_printf("%d\n",max);
}
	
