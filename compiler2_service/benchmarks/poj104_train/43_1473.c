#define NUM_ITER 28128

#include <header.h>

int fun(int x)
{ 
    int b=1;
    for(int a=2;a<x;a++)
    {
       if(x%a==0)
       {
          b=0;
          break; 
       }   
    } 
    return b;
}
main_bench()
{
   int m,n,k,i;
   my_scanf("%d",&m);
   n=m/2;
   k=(n+1)/2;
   for(i=2;i<=k;i++)
   {
      int c=2*i-1;
      if(fun(c)==1&&fun(m-c)==1)
         my_printf("%d %d\n",c,m-c);                         
   }
   getchar();
   getchar();
}