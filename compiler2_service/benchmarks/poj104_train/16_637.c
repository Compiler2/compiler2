#include <header.h>

int main_bench()

{int n,a,b,c,d;
my_scanf("%d",&n);
if((n>=0)&&(n<=9)) my_printf("%d",n);
   else if((n>=10)&&(n<=99))
   {a=n%10;
    b=(n-(n%10))/10;
	my_printf("%d%d",a,b);}
    else if((n>=100)&&(n<=999))
   {a=n%10;
    b=((n-a)%100)/10;
	c=(n-a-10*b)/100;
	my_printf("%d%d%d",a,b,c);}
    else if((n>=1000)&&(n<=9999))
   {a=n%10;                    
    b=((n-a)/10)%10;           
	c=((n-a-10*b)/100)%10;     
	d=(n-a-10*b-100*c)/1000;   
	my_printf("%d%d%d%d",a,b,c,d);}
else my_printf("00001");
return 0;
}