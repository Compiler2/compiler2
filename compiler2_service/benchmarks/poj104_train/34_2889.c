#define NUM_ITER 285348

#include <header.h>

int main_bench()
{
   int i,j,m,n,s;
   m=0;
   int x[100];
   my_scanf("%d",&n);
   if(n==1)
   {
        my_printf("End");
        return 0;
    }
   else
    {
       while(n!=1)
       {   
           if(n%2==0)
           {
               my_printf("%d/2=%d\n",n,n/2);
               n=n/2;
            }
           else{
                 my_printf("%d*3+1=%d\n",n,n*3+1);
                 n=n*3+1;
                }
           if(n==1)
              { my_printf("End");
                break;}
         }
      }
            return 0;
}