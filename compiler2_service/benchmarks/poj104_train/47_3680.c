#include <header.h>


int main_bench()
{
	int n,j,i,a[100];
    my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  my_scanf("%d",&a[i]);
	}
	  for(j=n-1;j>=1;j--)
	 {
		  my_printf("%d ",a[j]);
		  
	  }
	 
	my_printf("%d\n",a[0]);
	
	   
	return 0;
}

