#define NUM_ITER 1576258

#include <header.h>

int main_bench()
{
	int n,max=0,i,sec=0,a[301];
	char c;
	for(i=0;;i++)
	{
		my_scanf("%d%c",&a[i],&c);
		if(c!=',')
			break;
	}
	n=i;
	for(i=1;i<=n;i++)
	{
		if(a[i]>a[max])
		{
			sec=a[max];
			max=i;
		}
		else if(a[i]>sec&&a[i]<a[max])
		{
			sec=a[i];
		}
	}
	if(a[max]==sec||sec==0)
	{
		my_printf("No");
	}
	else
	my_printf("%d",sec);
	return 0;
} 