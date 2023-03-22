#include <header.h>

int main_bench()
{
	int n,i,s;
	my_scanf("%d",&n);
	i=1;
	s=0;
	do
	{
		if(i%7==0)
		{
			i++;
		}
		else if((i%10==7)||((70<=i)&&(i<=79)))
		{
			i++;
		}
		else
		{
			s=s+(i*i);
			i++;
		}
	}
	while(i<=n);
	my_printf("%d",s);
	return 0;
}