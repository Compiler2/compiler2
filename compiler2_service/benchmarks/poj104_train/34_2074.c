#include <header.h>

int main_bench()
{int a,b,c,i,j,k;
my_scanf("%d",&a);
if(a==1)
my_printf("End"); 
else
{while(a!=1)
{	if(a%2==0)
	{	my_printf("%d/2=%d\n",a,a/2);
		a=a/2;
	}
	else
	{	my_printf("%d*3+1=%d\n",a,(a*3+1));
		a=a*3+1;
	}
}
my_printf("End");
}
return 0;
}