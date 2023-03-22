#define NUM_ITER 310331

#include <header.h>

main_bench()
{
 int a,b;
 my_scanf("%d",&a);
 if(a==1)
  my_printf("End");
 else
 {
  while(a!=1)
 {
  while(a%2==0)
 {
  b=a/2;
  my_printf("%d/2=%d\n",a,b);             
  a=b;
 }
 while(a%2!=0 && a!=1)
 {
  b=a*3+1;
  my_printf("%d*3+1=%d\n",a,b);
  a=b;             
 }
 }
 my_printf("End");
 }     
}
