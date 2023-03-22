#include <header.h>

int main_bench()
{
	int m,i,a,j;
	my_scanf("%d",&m);
	for(i=3;i<=m/2;)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)break;
		}
		if(j==i)
		{
			a=m-i;
			for(j=2;j<=a;j++)
			{
				if(a%j==0)break;
			}
			if(j==a)
				my_printf("%d %d\n",i,a);
		}
		i=i+2;
	}
	return 0;
}

