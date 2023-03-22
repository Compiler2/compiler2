#include <header.h>

int main_bench()
{
  int a,b,c,d,x;
  my_scanf("%d",&x);
  if(x==0)  my_printf("0");
  else if(x<=9)  my_printf("%d",x);
  else if(x<=99)
    {
      a=x%10;
	  b=(x-a)/10;
	  my_printf("%d%d",a,b);
    }
  else if(x<=999)
   {
     a=x%10;
	 b=((x-a)%100)/10;
	 c=(x-10*b-a)/100;
	 my_printf("%d%d%d",a,b,c);
   }
  else if(x<=9999)
  {
    a=x%10;
	b=((x-a)%100)/10;
	c=((x-10*b-a)/100)%10;
	d=(x-100*c-10*b-a)/1000;
	my_printf("%d%d%d%d",a,b,c,d);
  }
  else my_printf("00001");
  my_printf("\n");
}