#include <header.h>



int main_bench()
{
	int n,i,a[1000];
	
	my_scanf("%d",&n);
	if(n==0) my_printf("0");
	for(i=1;n>0;i++)
	{    a[i]=n%10;
		my_printf("%d",a[i]);
	    n=n/10;
		
		
	}
	
	return 0;
}
