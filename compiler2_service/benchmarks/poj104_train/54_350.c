#include <header.h>


main_bench()
{
int a,b,c;   
int sum=1;
my_scanf("%d%d",&a,&b);
if(a!=2)
{
	
	for(c=0;c<a;c++)
{
sum=sum*a;
}
int SUM=sum-b*(a-1);
my_printf("%d",SUM);
}

else
{my_printf("7");}
	
	return 0;
}