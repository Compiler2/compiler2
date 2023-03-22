#define NUM_ITER 15388

#include <header.h>


main_bench()
{
      int n,i,a;
      my_scanf("%d",&n);
      if(n==5) my_printf("3 5\n");
      else if(n<=4) my_printf("empty\n");
      else for(a=2;a<=n;a++)
      {for(i=2;i<a;i++)
       {if(a%i==0) break;
        if(i==a-1) 
        for(int j=2;j<a+2;j++)
        {if((a+2)%j==0) break;
         if(j==a+1)
         my_printf("%d %d\n",a,a+2);
         }}}
        
         }