#define NUM_ITER 1428634

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,m;
    
	my_scanf("%d",&m);

    a=m%10,b=(m%100-a)/10,c=(m%1000-a-b*10)/100,d=(m%10000-a-b*10-c*100)/1000;
    e=(m-a-b*10-c*100-d*1000)/10000;
 

   if(m>10000&&m<100000)
   my_printf("%d\n",a*10000+b*1000+c*100+d*10+e);
   if(m>1000&&m<10000)
   my_printf("%d\n",a*1000+b*100+c*10+d);
 
   if(m>100&&m<1000)
   my_printf("%d\n",a*100+b*10+c);
   if(m>10&&m<100)
   my_printf("%d\n",a*10+b);
    if(m>=1&&m<10)
   my_printf("%d\n",a);
   
return 0;
}
