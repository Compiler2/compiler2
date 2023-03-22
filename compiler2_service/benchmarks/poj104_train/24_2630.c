#define NUM_ITER 34008

#include <header.h>

int main_bench()
{
	char b[205][100];
	int i,n,j=0,k=0,s=0,t=0,max,min;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",b[i]);
	}
	max=strlen(b[0]);
	min=strlen(b[0]);
	for (i=1;i<n;i++)
	{
		if (strlen(b[i])>max)
		{
			max=strlen(b[i]);
			s=i;
		}
		if (strlen(b[i])<min)
		{
			min=strlen(b[i]);
			t=i;
		}
	}
	my_printf("%s\n%s\n",b[s],b[t]);
	return 0;
}

