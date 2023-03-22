#define NUM_ITER 14421

#include <header.h>

int main_bench()
{
int i,j,n,p=0,m[20000];
my_scanf("%d\n",&n);
for(i=0;i<n;i++)
my_scanf("%d",&m[i]);
for(i=0;i<n;i++)
{
	j=0;
	while(j<i)
	{
		if(m[i]==m[j])
			break;
		j++;
	}
	if(j==i)
	{
	if(p)
		my_printf(" ");
	my_printf("%d",m[i]);
	p++;
	}
}
return 0;
}