#include <header.h>

int main_bench()
{
	int a[20000],n,i,m,r;
	my_scanf("%d",&n);
	my_scanf("%d",&a[1]);
	my_printf("%d",a[1]);
	for(i=2;i<=n;i++)
	{
		r=0;
		my_scanf("%d",&a[i]);
        for(m=1;m<i;m++)
		{
			if(a[i]==a[m])
				r++;
		}
		if(r==0)
			my_printf(" %d",a[i]);
	}
	my_printf("\n");
	return 0;
}