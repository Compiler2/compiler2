#define NUM_ITER 1784547

#include <header.h>

int main_bench()
{
int n;
my_scanf("%d",&n);
if(n>9999)
{my_printf("00001");}
else if(n>999)
{my_printf("%d%d%d%d",n%1000%100%10,n%1000%100/10,n%1000/100,n/1000);}
else if(n>99)
{my_printf("%d%d%d",n%100%10,n%100/10,n/100);}
else if(n>9)
{my_printf("%d%d",n%10,n/10);}
else 
{my_printf("%d",n);}
return 0;
}