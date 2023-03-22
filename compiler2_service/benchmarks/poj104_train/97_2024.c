#define NUM_ITER 1777596

#include <header.h>

int main_bench()
{
int sum;
my_scanf("%d",&sum);
int i=0;
while(sum>=100)
{
i++;
sum=sum-100;
}
my_printf("%d\n",i);
i=0;
while(sum>=50)
{
i++;
sum=sum-50;
}
my_printf("%d\n",i);
i=0;
while(sum>=20)
{
i++;
sum=sum-20;
}
my_printf("%d\n",i);
i=0;
while(sum>=10)
{
i++;
sum=sum-10;
}
my_printf("%d\n",i);
i=0;
while(sum>=5)
{
i++;
sum=sum-5;
}
my_printf("%d\n",i);
i=0;
while(sum>=1)
{
i++;
sum=sum-1;
}
my_printf("%d\n",i);
}