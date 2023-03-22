#include <header.h>

int main_bench()
{
 int n,a[3],i=0;
 my_scanf("%d",&n);
 if(n%3==0)
 a[i++]=3;
 if(n%5==0)
 a[i++]=5;
 if(n%7==0)
 a[i++]=7;
 switch(i)
{
 case 3:my_printf("%d %d %d",a[0],a[1],a[2]);break;
 case 2:my_printf("%d %d",a[0],a[1]);break;
 case 1:my_printf("%d",a[0]);break;
 case 0:my_printf("%c",'n');break;
}
}
