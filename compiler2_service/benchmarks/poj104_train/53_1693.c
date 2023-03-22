#define NUM_ITER 745

#include <header.h>

main_bench()
{
	int a[300],i,n,j,b[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		b[i]=a[i];
	}
loop:for(i=1;i<n-1;i++)
	{
		for(j=i-1;j>=0;j--)
		{

		    if(a[i]==b[j])
			{
				for(;i<n-1;i++)
				{ 
			        a[i]=a[i+1];
					b[i]=a[i];
					
				}	
				n--;
				goto loop;
			}
		}
	}
	 for(i=0;i<n-1;i++)
	 {
		 if(a[n-1]==a[i])
			 n--;
	 }
	 if(n==1)
		 my_printf("%d",a[0]);
	 else
	 {
		 my_printf("%d",a[0]);
	     for(i=1;i<n;i++)
		 {
		      my_printf(",%d",a[i]);
		 }
	 }
	return 0;
}