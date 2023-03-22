#include <header.h>

int main_bench()
{int a,b,c,d,e;
my_scanf("%d",&a);
if(a<10)
{my_printf("%d\n",a);}
else if(a<100)
{b=a%10;
c=(a-b)/10;
a=b*10+c;
my_printf("%02d\n",a);}
else if(a<1000)
{b=a%10;
c=((a-b)%100)/10;
d=(a-c*10-b)/100;
a=b*100+c*10+d;
my_printf("%03d\n",a);}
else {b=a%10;
c=((a-b)%100)/10;
d=((a-c*10-b)%1000)/100;
e=(a-d*100-c*10-b)/1000;
a=b*1000+c*100+d*10+e;
my_printf("%d\n",a);
}






return 0;
}