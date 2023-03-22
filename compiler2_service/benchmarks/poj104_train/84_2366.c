#define NUM_ITER 46759

#include <header.h>



int main_bench()
{
	int num[1000],i,j,a,r,b,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%d",&num[i]);
	a=num[0];
	for (j=1;j<n;j++)
	if (num[j]>=a)

	{
		a=num[j];
	}

b=-10000;
for(r=0;r<n;r++)
if(num[r]>=b&&num[r]!=a)
{
	b=num[r];
}
my_printf("%d\n%d",a,b);

	return 0;
}
