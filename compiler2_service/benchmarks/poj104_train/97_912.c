#define NUM_ITER 1233584

#include <header.h>

int main_bench()
{
int n,a1,a2,a3,a4,a5,a6;
my_scanf("%d",&n);
if(n>1000||n<=0)
my_printf("error");
else
{
a1=n/100;
a2=n/50-a1*2;
a3=(n-a1*100-a2*50)/20;
a4=(n-a1*100-a2*50-a3*20)/10;
a5=(n-a1*100-a2*50-a3*20-a4*10)/5;
a6=(n-a1*100-a2*50-a3*20-a4*10-a5*5)/1;
my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a1,a2,a3,a4,a5,a6);
}
return 0;
}