#include <header.h>

int main_bench(){
	int n,k[101],i,q[101],j=0,m=0;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d",&k[i],&q[i]);
	}
	for(i=0;i<n;i++)
	{
		if(k[i]<=140&&k[i]>=90&&q[i]<=90&&q[i]>=60)
		{
			j++;
		}
		else
		{
			if(j>m)
			{
				m=j;
				j=0;
			}
			else
			{
				j=0;
			}
		}
	}
	if(j>m)
			{
			my_printf("%d",j);
			}
			else
			{
my_printf("%d",m);
			}
	return 0;
}
