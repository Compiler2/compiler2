#define NUM_ITER 222054

#include <header.h>

int main_bench()
{
	int i,a;
	my_scanf("%d",&a);
	if (a!=1) 
		while ((a/2!=1) || (a%2!=0)) 
		if (a%2==0)
		{
			my_printf("%d/2=%d\n",a,a/2);
			a=a/2;
		}
        else 
		{
           my_printf("%d*3+1=%d\n",a,a*3+1);
		   a=a*3+1;
		}
    if (a!=1) my_printf("%d/2=%d\n",a,a/2);
	my_printf("End\n");
	return 0;
}