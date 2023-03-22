#define NUM_ITER 8545

#include <header.h>

 main_bench()
{int a[100],n,i,j,k;
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
   my_scanf("%d",&a[i]);
 for(i=0;i<n;i++)
   {for(j=0;j<i,a[i]!=a[j];j++);
	if(j==i)
	 {if(i==0)
		my_printf("%d",a[i]);
	  else
		my_printf(",%d",a[i]);
	 }
	}


}