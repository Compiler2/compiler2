#define NUM_ITER 1666220

#include <header.h>

int main_bench()
{
	int n,i,a[300],m=0,c=0,r=0;
	char q;
	for (n=0;;n++)
	{
		my_scanf("%d",&a[n]);
		q=getchar();
		if(q!=',')
		{
			n=n+1;
			break;
		}
	}
	for (i=0;i<=n-1;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	for(i=0;i<=n-1;i++)
	{
		if (a[i]>c&&a[i]<m)
		{
			r=r+1;
			c=a[i];
		}
	}
	if(r!=0)
	{
		my_printf("%d",c);
	}
	else{
		my_printf("No");
	}
}