#define NUM_ITER 81093

#include <header.h>

int main_bench()
{
   int sum=0;
   int n,i;
   my_scanf("%d",&n);
   for(i=1;i<=n;i++)   
   { 
       if(i%7==0) continue;
       else if((i-10*(int)(i/10))==7)  continue;
       else if((int)(i/10)==7) continue;
       sum=sum+i*i;
    }
    my_printf("%d",sum);
    return 0;
}

