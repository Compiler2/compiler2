#define NUM_ITER 1020218

#include <header.h>

int main_bench()
{
	int n;
	int a[5];
	int i,j;
	my_scanf("%d",&n);
	for (i=0;i<5;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	if (a[4]==0 && a[3]==0 && a[2]==0 && a[1]==0) my_printf("%d",a[0]);
	else
		if (a[4]==0 && a[3]==0 && a[2]==0) my_printf("%d%d",a[0],a[1]);
		else
			if (a[4]==0 && a[3]==0) my_printf("%d%d%d",a[0],a[1],a[2]);
			else
				if (a[4]==0) my_printf("%d%d%d%d",a[0],a[1],a[2],a[3]);
				else my_printf("%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4]);
	return 0;
}