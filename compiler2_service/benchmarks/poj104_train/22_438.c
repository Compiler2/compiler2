#define NUM_ITER 1449621

#include <header.h>

int main_bench()
{
	int a[300],i=0,n=0,r,k=1,s;
	char b;
	for(;i<300;)
	{
		my_scanf("%d",&a[i]);
        i++;
		n++;
		my_scanf("%c",&b);
		if(b!=',')
			break;
	}
	if(n==1)
		my_printf("No\n");
	else
	{
		for(;k<n;k++)
		{

		for(i=0;i<n-k;i++)
		{
			if(a[i]<a[i+1])
			{
				r=a[i+1];
				a[i+1]=a[i];
				a[i]=r;
			}
		}
		}
		if(a[0]==a[n-1])
			my_printf("No\n");
		else
		{
			for(i=1;i<n;i++)
			{
				if(a[i]!=a[0])
				{
					s=i;
					break;
				}
			}
			my_printf("%d\n",a[s]);
		}
	}
	return 0;
}

