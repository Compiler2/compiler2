#define NUM_ITER 779836

#include <header.h>

int main_bench()
{
int money,c,i,a[6],b[6]={100,50,20,10,5,1};
my_scanf("%d",&money);
for(i=0;i<6;i++)
{ c=money%b[i];
  a[i]=(money-c)/b[i];
  money=money%b[i];
  my_printf("%d\n",a[i]);}
}

 