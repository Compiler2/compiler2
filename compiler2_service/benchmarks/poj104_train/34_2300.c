#define NUM_ITER 250749

#include <header.h>

int main_bench()
{
  int n,i,k;
  my_scanf("%d",&n);
    while(n>1)
      {
        if(n%2==1) 
           {
             my_printf("%d*3+1=%d\n",n,(n*3+1));
             n=n*3+1;
            }
          if(n%2==0)
            {
              my_printf("%d/2=%d\n",n,(n/2));
             n=n/2;
            }
       }
     my_printf("End");
return 0;
}