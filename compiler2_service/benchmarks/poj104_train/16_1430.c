#include <header.h>

int main_bench()
{
 int num;
 my_scanf("%d",&num);
 if(num==10000)
 my_printf("00001\n");
 else
 if(num>999)
 my_printf("%d%d%d%d\n",num%10,num%100/10,num/100%10,num/1000%10);
 else
 if(num>99)
 my_printf("%d%d%d\n",num%10,num%100/10,num/100%10);
 else
 if(num>9)
 my_printf("%d%d\n",num%10,num%100/10);
 else
 my_printf("%d\n",num);
 return 0;
}