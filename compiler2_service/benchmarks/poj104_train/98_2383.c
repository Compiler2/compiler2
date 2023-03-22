#define NUM_ITER 31896

#include <header.h>

main_bench()
{
	char p[1000][30];
	int i,n=0;
	int sum[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",p[i]);
		sum[i]=strlen(p[i]);
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		if(count==0)
		{
			my_printf("%s",p[i]);
			count=count+sum[i];
		}
		else if(count+sum[i]<80)
		{
			my_printf(" %s",p[i]);
			count=count+sum[i]+1;
		}
		else if(count+sum[i]>=80)
		{
			my_printf("\n");
			count=sum[i];
			my_printf("%s",p[i]);
		}
	}
}