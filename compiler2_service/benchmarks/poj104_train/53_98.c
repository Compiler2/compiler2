#define NUM_ITER 3251

#include <header.h>

int main_bench()
{
	int a[100],i,n,j,x;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for (j=1;j<n;j++)
		{
			if (a[j]==a[i]&&j!=i)
			a[j]=0;
		}
	}
	for (i=0;i<n;i++)
	{
		if (a[i]!=0)
		{
			my_printf("%d",a[i]);
			x=i;
			goto loop;
        }
	}
    loop:for(i=x+1;i<n;i++)
		 {
			 if (a[i]!=0)
			 my_printf(",%d",a[i]);
		 }
		 my_printf("\n");
}
