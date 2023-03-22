#define NUM_ITER 482718

#include <header.h>

int reverse(int num)
{
    int i,j=0;
    if(num>0)
    {
             for(;num>0;)
             {
                         i=num%10;
                         num=num/10;
                         j=j*10+i;
             }
             return(j);
    }
    else if(num<0)
    {
         num=-num;
         for(;num>0;)
         {
                     i=num%10;
                     num=num/10;
                     j=j*10+i;
         }
         return(-j);
    }
    else if(num==0)
    {
         j=num;
         return(j);
    }
}
    
main_bench()
{
      int a,i;
      int num;
      for(i=0;i<=5;i++)
      {
                       my_scanf("%d",&num);
                       a=reverse(num);
                       my_printf("%d\n",a);
      }
}