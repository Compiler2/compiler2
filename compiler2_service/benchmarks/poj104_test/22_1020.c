#define NUM_ITER 1448646

#include <header.h>

int main_bench()
{
	int max,m=0,a[300],i;
	my_scanf("%d",&a[0]);
	max=a[0];i=1;
	while(my_scanf(",%d",&a[i]))
	{
		if(a[i]>max){m=max;max=a[i];}
		else if(a[i]>m&&a[i]<max) m=a[i];
	}
	if(m==0) my_printf("No\n");
	else my_printf("%d\n",m);
	return 0;
}
