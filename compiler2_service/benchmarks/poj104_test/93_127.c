#define NUM_ITER 1369006

#include <header.h>


void function(int,int);

int main_bench()
{
   int n;
   int i;
   int k=0;

   my_scanf("%d",&n);
   for(i=0;i<3;i++)
   {
      if(n%(2*i+3)==0)
      {
         k++;
      }
   }
   for(i=0;i<3;i++)
   {
      if(n%(2*i+3)==0)
      {
         my_printf("%d",(2*i+3));
         if(k>1)
         {
            my_printf(" ");
            k--;
         }
      }

   }
   if(k==0)
   {
      my_printf("n");
   }
   return 0;

}