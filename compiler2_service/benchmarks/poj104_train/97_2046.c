#include <header.h>

int main_bench()
{
int sum;
my_scanf("%d",&sum);
my_printf("%d\n",sum/100);
sum=sum-sum/100*100;
if(sum>=50)
{
my_printf("1\n");
sum=sum-50;
}
else
my_printf("0\n");
my_printf("%d\n",sum/20);
sum=sum-sum/20*20;
my_printf("%d\n",sum/10);
sum=sum-sum/10*10;
my_printf("%d\n",sum/5);
sum=sum-sum/5*5;
my_printf("%d\n",sum);
return 0;
}