#include <header.h>

main_bench()
{
	int a,i;
	my_scanf("%d",&a);
         if(a==0) my_printf("%d",a);
	for(i=0;i<5;i++)
	{
		if(a!=0)
			my_printf("%d",a%10);
		a=a/10;
	}
	my_printf("\n");
	return(0);
}
