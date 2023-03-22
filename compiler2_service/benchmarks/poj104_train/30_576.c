#define NUM_ITER 46303

#include <header.h>

int main_bench()
{
   int n;
   int sum=0;
   my_scanf("%d",&n);
   while(n>0)   
  {
       if(n%7==0 || n%10==7 || n/10==7) 
       {
         sum=sum;
        }
      else if(n%7!=0&&n%10!=7&&n/10!=7)
       { 
         sum = sum+n*n;
       }
         n=n-1;
        
  }
   my_printf("%d",sum);
   return 0;
}