#include <header.h>

int main_bench()
{
 int x,a,b,c,d;
 my_scanf("%d",&x);
 a=x%10;
  b=(x%100-a)/10;
  c=(x%1000-b*10-a)/100;
  d=x/1000;
 if (x>999&&x<10000) my_printf("%d%d%d%d\n",a,b,c,d);
 else if(x>99&&x<1000) my_printf("%d%d%d\n",a,b,c);
 else if(x>9&&x<100)   my_printf("%d%d\n",a,b);
 else if (x>0&&x<10)   my_printf("%d\n",a);
 else if (x==0) my_printf("0\n");
 else if (x==10000) my_printf("00001\n");
	 
}

