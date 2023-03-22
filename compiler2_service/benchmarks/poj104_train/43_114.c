#define NUM_ITER 27421

#include <header.h>

int sushu(int a)
{
int i;
   for(i=2;i<a;i++)
   {
      if(a%i==0)
      break;
    }
    if(i==a)
      return 1;
} 
main_bench()
{
      int m,i;
      my_scanf("%d",&m);
      for(i=3;i<=m/2;i=i+2)
      {
         if((sushu(i)==1)&&(sushu(m-i)==1))
           my_printf("%d %d\n",i,m-i);
      }
}                                            