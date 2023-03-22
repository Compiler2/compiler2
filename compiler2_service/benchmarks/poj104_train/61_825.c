#define NUM_ITER 7878

#include <header.h>

main_bench()
{
	int a[100];
	int n,m;
	int i,j;
	int k;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&m);
		if (m==1 || m==2)
		{
			if (i==0)
			    my_printf("1\n");
			else
				my_printf("\n1\n");
		}
		else
		{
	        a[0]=1;
	        a[1]=2;
	        for (j=2;j<m-1;j++)
			{
		        a[j]=a[j-1]+a[j-2];
			}
			if (i==0)
	            my_printf("%d\n",a[m-2]);
			else
				my_printf("\n%d\n",a[m-2]);
		}
	}
}