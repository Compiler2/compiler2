#define NUM_ITER 5394

#include <header.h>

   int main_bench()
{
	   int n;
	   my_scanf("%d",&n);
	   int a[100],b=0,i=0,j=0;
	   for(i=1;i<=n;i++)
		   my_scanf("%d",&a[i]);
	    for(j=1;j<=n;j++)
		{
			for(i=1;i<=n-j;i++)
			{
				if (a[i]<a[i+1])
				{
					b=a[i];
					a[i]=a[i+1];
					a[i+1]=b;
				}
			}
		}
		for (i=1;i<=n;i++);

	    my_printf("%d\n",a[1]);
        my_printf("%d\n",a[2]);
		return 0;
   }