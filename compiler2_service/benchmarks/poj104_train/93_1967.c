#include <header.h>

int main_bench()
{
 int a,b,c,d;
my_scanf("%d",&d);
 a=3;
 b=5;
 c=7;
if(d%3==0&&d%5==0&&d%7==0) my_printf("%d %d %d",a,b,c);
else if(d%3!=0&&d%5!=0&&d%7!=0) my_printf("n");
else if(d%3==0&&d%5!=0&&d%7!=0) 
	 my_printf("%d",a);
else if (d%3!=0&&d%5==0&&d%7!=0)
	 my_printf("%d",b);
else if (d%3!=0&&d%5!=0&&d%7==0)
	 my_printf("%d",c);
else if(d%3==0&&d%5==0&&d%7!=0)
	 my_printf("%d %d",a,b);
else if(d%3==0&&d%5!=0&&d%7==0)
	 my_printf("%d %d",a,c);
else if(d%3!=0&&d%5==0&&d%7==0)
	 my_printf("%d %d",b,c);
}
