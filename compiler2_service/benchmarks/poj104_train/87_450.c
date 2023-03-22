#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,n;
	my_scanf("%d",&a);
	while(a>0)
	{
		my_scanf("%d%d%d%d%d",&b,&c,&d,&e,&f);
	
         n=(d+12-a)*3600;
		 n=n+(e-b)*60;
		 n=n+f-c;
		 my_printf("%d\n",n);
		 my_scanf("%d",&a);
		 
	}
}