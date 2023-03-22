#define NUM_ITER 357419

#include <header.h>

int main_bench()
{
	int a[300]={0},i=0,j,n=0;
	char c;
	while((c=getchar())!='\n')
	{
		if(c!=' ')
		{
			n=1;
			a[i]++;
		}
		else
			if(n==1)
			{
				n=0;
				i++;
			}
	}
	for(j=0;j<i;j++)
		my_printf("%d,",a[j]);
	my_printf("%d",a[i]);
}