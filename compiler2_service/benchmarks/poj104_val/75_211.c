#define NUM_ITER 21755

#include <header.h>

int main_bench()
{
	int a[1010]={0};
	int x[1010],y[1010];
	char c=',';
	int n=0;
	int i,j;
	i=1;
	while(c!=10)
	{
		my_scanf("%d%c",&x[i],&c);
		n++;
		i++;
	}
	for(i=1;i<=n;i++)
	{
		my_scanf("%d%c",&y[i],&c);
	}
	my_printf("%d ",n);
	for(i=1;i<=n;i++)
	{
		for(j=x[i];j<y[i];j++)
		{
			a[j]++;
		}
	}
	int max=0;
	for(i=0;i<1010;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	my_printf("%d",max);
}