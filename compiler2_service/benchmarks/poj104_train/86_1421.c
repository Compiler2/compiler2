#define NUM_ITER 1148

#include <header.h>

main_bench()
{
      int m,n,i,j,k,l,sum,t;
       my_scanf("%d",&m);
       for (i=1;i<=m;i++)
       {
           my_scanf("%d",&n); 
           sum=60;t=0;          
       for (j=1;j<=n;j++)
       {
           my_scanf("%d",&l);
           if (sum>l)
           { 
           if (sum-l<3) sum=l;
            else sum=sum-3;
           }
           }   
       my_printf("%d\n",sum);
       }
    
       }
