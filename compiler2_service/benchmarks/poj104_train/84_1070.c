#define NUM_ITER 58838

#include <header.h>

int main_bench(void)
{
	int s[100];
	int n,i=0,max,qmax;
	my_scanf("%d",&n);
	while(i<n)
	{
		my_scanf("%d",&s[i]);
		i++;
	}
	i=1;
	max=qmax=s[0];
	while(i<n)
	{
		if(max<s[i])
			qmax=max,max=s[i];
		else if(qmax<s[i])
			qmax=s[i];
		i++;
	}
	my_printf("%d\n%d\n",max,qmax);
	return 0;
}