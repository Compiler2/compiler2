#define NUM_ITER 12

#include <header.h>

main_bench()
{
  int m=1,n,i,j,k,r=0,T;
  while(m!=0)
   {
     my_scanf("%d %d",&m,&n);if(m==0)break;
     int monkey[309];
     for(i=0;i<m;i++)
       monkey[i]=1;
     T=0;
     for(i=1;i<m;i++)
       {
         for(j=1;j<=n;)
           {
             if(monkey[T]==1)
               {j=j+1;}
             T=(T+1)%m;
           }
         monkey[(T-1+m)%m]=0;
       }
     for(i=0;i<m;i++)
        {
          if(monkey[i])
            {
             my_printf("%d\n",i+1);
             
             }

        }
}}