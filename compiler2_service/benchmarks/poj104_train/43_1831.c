#define NUM_ITER 12298

#include <header.h>

int main_bench()
{int m,a,i,k;
my_scanf("%d",&m);
for(a=3;a<=m/2;a+=2)
{k=0;{for(i=1;i<=m/2;i+=2)
if(a%i==0||(m-a)%i==0) k++;}
if(k==2) my_printf("%d %d\n",a,m-a);}
return 0;}