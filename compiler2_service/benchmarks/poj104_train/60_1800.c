#define NUM_ITER 68575

#include <header.h>

int main_bench()
{
    int n,m,k,i,j=0,z;
    my_scanf("%d",&n);
   for(i=3;i<=n-2;i=i+2)
   {
                      z=1;
   for(k=3;k*k<=i;k++)
   if(i%k==0) z=0;
   if(z==0);
   else 
   {  z=1;
       for(k=3;k*k<=i+2;k++)
   if((i+2)%k==0) z=0;;
   if(z==0);
   else {my_printf("%d %d\n",i,i+2);j++;}
        }
   }
   if(j==0)
   my_printf("empty");
  }