#include <header.h>

int main_bench()
{
	int a[100];
	int n;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	int max,sec;
	max=a[0];
	sec=a[0];
	for(i=1;i<n;i++)
	{if(a[i]>max)
			max=a[i];
	 if(a[i]<max&&a[i]>sec)
		    sec=a[i];
	}
	my_printf("%d\n%d\n",max,sec);
}
