#define NUM_ITER 1635306

#include <header.h>

int main_bench()
{
	int a[300],i,j,n=0,t=0,d=0;
	char c;
	for(i=0;i<300;i++)
	{
	my_scanf("%d%c",&a[i],&c);n=n+1;
	if(c!=',')i=300;
	}
	if(n==1){my_printf("No");}
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]==a[j])
				{d=d+1;t=t+1;}
				else if(a[i]>a[j])
				{t=t+1;d=d;}
			}
			if(t==n)i=n;
			else 
			{t=0;d=0;}
			
		}
		if(d==n){my_printf("No");}
		else
		{
			t=0;
			for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]>=a[j])
				t=t+1;
			}
			if(t==n-d)
			{
				my_printf("%d",a[i]);
				break;
			}
			t=0;
		}
		}
	}
	return 0;
}


		