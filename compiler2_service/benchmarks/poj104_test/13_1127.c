#define NUM_ITER 7243

#include <header.h>

int main_bench()
{
	int n,i,j;
	my_scanf("%d\n",&n);
	int num[n];
	my_scanf("%d",&num[0]);
	my_printf("%d",num[0]);
	for(i=1;i<=n-1;i++)
	{
		my_scanf(" %d",&num[i]);
		for(j=0;j<=i;j++)
		{
		if(j<i&&num[j]==num[i])
		{break;}
		if(j==i)
		{my_printf(" %d",num[i]);}
		}
	}
return 0;	
}