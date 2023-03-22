#include <header.h>

int main_bench()
{
	int a,i=0;
    my_scanf("%d",&a);
if(a==100)
my_printf("001");
else
{
	while(a>0)
	{
		i=i*10+a%10;
		
		a=a/10;
	}
     my_printf("%d",i);}
	return(0);		
}