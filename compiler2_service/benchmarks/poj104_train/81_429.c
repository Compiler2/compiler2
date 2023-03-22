#define NUM_ITER 232807

#include <header.h>

int main_bench()
{
	int a[5][5];
	int i,y;
	int *p;
	int *pa[5];
	int fun(int *pa[]);
	for(i=0;i<5;i++)
	{
		pa[i]=a[i];
		for(p=a[i];p<a[i]+5;p++)
			my_scanf("%d",p);
	}
	y=fun(pa);
	if(y==0)
		my_printf("error\n");
	else
	{
		for(i=0;i<5;i++)
		{
			for(p=pa[i];p<pa[i]+5;p++)
				my_printf("%d%c",*p,(p-pa[i]==4)?'\n':' ');
			my_printf("\n");
		}
	}
	return 0;
}
int fun(int *pa[])
{
	int n,m;
	int *i;
	my_scanf("%d %d",&n,&m);
	if(n>4||m>4)
		return 0;
	else
	{
		i=pa[n];
		pa[n]=pa[m];
		pa[m]=i;
		return 1;
	}
}