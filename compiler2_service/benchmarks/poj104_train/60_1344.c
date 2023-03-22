#define NUM_ITER 29045

#include <header.h>


int main_bench()
{
int n,i,j,a;
my_scanf("%d",&n);
if(n<5)
my_printf("empty");
else
{for(i=3;i<=n-2;i++,a=1)
{
for(j=2;j<=i/2;j++)
{if(i%j==0||(i+2)%j==0)
   {a=0;break;}}
  if(a){my_printf("%d %d\n",i,i+2);}
   

}
}
}
