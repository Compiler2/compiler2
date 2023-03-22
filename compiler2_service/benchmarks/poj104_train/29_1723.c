#define NUM_ITER 4774

#include <header.h>

main_bench()
{ 
   int m,n[100];
   my_scanf("%d",&m);
   int i,j;
   float sum;
   int a,b,t;
   for(i=0;i<m;i++)
    {
     my_scanf("%d",&n[i]);
     sum=0;
     a=1;
     b=2;
     for(j=1;j<=n[i];j++)
     { 
       sum=sum+(float)b/a;
       t=a+b;
       a=b;
       b=t;
     }
     my_printf("%.3f\n",sum);
  }

 }