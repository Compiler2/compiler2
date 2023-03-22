#include <header.h>

int main_bench()
{
	int n,k,i,j,s[1000];
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&s[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if((s[i]+s[j])==k)
			{
				my_printf("yes\n");
				return 0;
			}
	my_printf("no\n");
	return 0;
}