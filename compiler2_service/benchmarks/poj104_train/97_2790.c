#define NUM_ITER 1766435

#include <header.h>


int main_bench()
{
  int m,n,a100=0,a50=0,a20=0,a10=0,a5=0,a1=0;
my_scanf("%d",&m);
for(;m>=100;)
{
  m=m-100;
 a100++;
}
for(;m>=50;)
{
  m=m-50;
 a50++;
}
for(;m>=20;)
{
  m=m-20;
 a20++;
}
for(;m>=10;)
{
  m=m-10;
 a10++;
}
for(;m>=5;)
{
  m=m-5;
 a5++;
}
for(;m>=1;)
{
  m=m-1;
 a1++;
}
my_printf("%d\n%d\n%d\n%d\n%d\n%d",a100,a50,a20,a10,a5,a1);



}