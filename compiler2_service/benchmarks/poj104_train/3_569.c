#define NUM_ITER 59818

#include <header.h>

int main_bench()
{
	int n,k,i,j;
	my_scanf("%d%d",&n,&k);
	int a[1000];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	int m=0;
	for(i=0;i<n-1;i++)
	{
		int isbreak=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{my_printf("yes\n");
			m=1;
			isbreak=1;
			break;}
		}
		if(isbreak==1)
			{break;}
	}
	if(m==0)
	{my_printf("no\n");}
	return 0;
}