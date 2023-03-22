#define NUM_ITER 1138206

#include <header.h>

int main_bench()
{
	int t,a[10],m,i;
	my_scanf("%d",&t);
    for(i=0;i<=4;i++)
	{
		a[i]=t%10;
		t=t/10;
	}
	for(i=4;i>=0;i--)
	{
        if(a[i]!=0)
		{
			m=i;break;
		}
	}
	for(i=0;i<=m;i++)
	{
		my_printf("%d",a[i]);
	}
	return 0;
}