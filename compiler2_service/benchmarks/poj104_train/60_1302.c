#define NUM_ITER 10218

#include <header.h>


main_bench()
{ 
  int d(int x);
  int n,i,a,b;  
  my_scanf("%d",&n);
  if(n<5)
  my_printf("empty");
  else
  {
      for(i=3;i<(n-1);i+=2)
  {
  a=d(i);
  b=d(i+2);
  
  if(a==0&&b==0)
  my_printf("%d %d\n",i,i+2);
 
  }
}
  
  }
   
   int d(int x)
{
    int t;
   
    for(t=2;t<x;t++)
    {
    if(x%t==0) 
    {return 1;break;}
    } 
    if(t>=x) return 0 ;
       }