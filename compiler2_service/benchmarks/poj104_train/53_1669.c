#define NUM_ITER 6104

#include <header.h>

int main_bench()
{
	int n,i=0,j=0,flag=0;
	int str[300];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&str[i]);
	}
	i=1;
	my_printf("%d",str[0]);
	for(i=1;i<n;i++)
	{   j=0;
	    flag=0;
		for(j=0;j<i;j++)
		{ if(str[i]==str[j])
		    flag=1;

		}
		if(flag==0)
			my_printf(",%d",str[i]);

	}
	return 0;
}