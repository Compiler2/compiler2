#define NUM_ITER 56086

#include <header.h>

int main_bench()
{
	int s[1000]={0};
	int n,m,i;
	my_scanf("%d %d",&n,&m);

	for(i=0;i<n;i++)
		my_scanf("%d",&s[i]);

	for(i=0;i<n-m;i++)
		s[i+n]=s[i];

	for(i=n-m;i<2*n-m-1;i++)
		my_printf("%d ",s[i]);
	my_printf("%d",s[2*n-m-1]);
} 