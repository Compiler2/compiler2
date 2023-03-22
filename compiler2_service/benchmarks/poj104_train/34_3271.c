#define NUM_ITER 265062

#include <header.h>

main_bench()
{ int n,k,i,j,*a,t,s,p;
  my_scanf("%d",&n);
  while(n!=1)
  { if(n%2==0)
    { my_printf("%d/2=%d",n,n/2);

    n=n/2;
    }
    else if(n%2!=0){
    my_printf("%d*3+1=%d",n,n*3+1);
    n=n*3+1;
    }
    my_printf("\n");
  }
  my_printf("End");
}