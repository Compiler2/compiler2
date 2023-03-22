#include <header.h>

int main_bench()
{
	int a[6],t,i,k,m;
	for (k=1;k<=4;++k)
	{
		my_scanf("%d",&t);
		m=0;
		for (i=1;t>0;++i)
		{
			a[m]=t%10;
			t=(int)(t/10);
			my_printf("%d",a[m]);
			m++;
		}
		my_printf("\n");
	}
		return(0);
}