#define NUM_ITER 65112

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int a,b;
	my_scanf("%d%d",&a,&b);
	int i;
	for(i=0;i<(n-2);i++)
	{
		int k;
		my_scanf("%d",&k);
		if(k>a)
		{
			b=a;
			a=k;
		}
		else if(k>b)
		{
			b=k;
		}
	}
	my_printf("%d\n",a);
    my_printf("%d\n",b);
	return 0;
}