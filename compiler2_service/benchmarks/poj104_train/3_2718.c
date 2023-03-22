#define NUM_ITER 53710

#include <header.h>

int main_bench()
{
	int n,K,i,j;
	int a[1000];
	my_scanf("%d %d/n",&n,&K);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]+a[j])==K)
			{	
			goto first;
			}
		}
	}
	goto third;
	first:my_printf("yes");goto second;
	third:my_printf("no");return 0;
	second:return 0;	
}