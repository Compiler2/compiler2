#define NUM_ITER 1009733

#include <header.h>


int sushu(int x)
{
    int i=2;
    int s=0;
    while (i<x)
    {
         if  ((x%i)==0)
         {
             s++;
             x=x/i;
         }
         else
         i++;
    }
    
    if  (s==0)
    return 1;
    else
    return 0;
}

int huiwenshu(int x)
{
    int y=0;
    int w;
    int ori;
    ori=x;
    
    while  (x>0)
    {
           w=x%10;
           y=y*10+w;
           x=(x-w)/10;
    }
    if  (ori==y)
    return 1;
    else
    return 0;
}
       
    

main_bench()
{
      int m,n;
      int s=0;
      
      my_scanf("%d%d",&m,&n);
      while  (m<=n)
      {
           if  (sushu(m))
           {
               if  (huiwenshu(m))
               {
                   if (s==0)
                   {my_printf("%d",m);s++;}
                   else
                   my_printf(",%d",m);
               }
           }
           m++;
      }
      
      if  (s==0)
      my_printf("no");

}
      
