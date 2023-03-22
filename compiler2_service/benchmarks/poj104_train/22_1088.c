#define NUM_ITER 219693

#include <header.h>


int main_bench()
{
	int n,i,a[300],max=0,secondmax=0;
	char c;
	for(n=0;1;n++)
	{
		my_scanf("%d%c",&a[n],&c);
		if(a[n]>max)
		{
			secondmax=max;
			max=a[n];
		}
		if(a[n]>secondmax&&a[n]<max)
		{
			secondmax=a[n];
		}
		if(c=='\n')
			break;						
	}
	if(secondmax==0)
		my_printf("No\n");
	else
		my_printf("%d\n",secondmax);
	return 0;
}