#define NUM_ITER 9584

#include <header.h>

int main_bench()
{
	int n,i,j,elem[200],s=0;
	int *p=elem;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",p+i);
	}
	my_printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=0,s=0;j<i;j++)
		{
			if(*(p+i)==*(p+j)) s++;
		}
		if(s==0)
		{
			my_printf(",%d",*(p+i));
		}
	}
}