#define NUM_ITER 48505

#include <header.h>


int main_bench()
{
	int a;
	my_scanf("%d",&a);
	int n[100];
	int i;
	for(i=0;i<a;i++)
	{
		my_scanf("%d",&n[i]);
	}
	int max=n[0];
	int j;
	for(j=1;j<a;j++)
	{
		if (n[j]>max)
		{
			max=n[j];
		}
	}
	my_printf("%d",max);
	int next=n[0];
	int q;
	for(q=1;q<a;q++)
	{
		if(n[q]>=next&&n[q]<max)
		{
			next=n[q];
		}
	}
	my_printf("\n%d\n",next);
	return 0;
}