#include <header.h>

main_bench()
{
      int n,N;
      my_scanf("%d",&n);
      N=n;
      
      if(n%3==0)
        n=n/3;
      if(n%5==0)
        n=n/5;
      if(n%7==0)
        n=n/7;
      
      if(N/n==1)
        my_printf("n");
      if(N/n==3)
        my_printf("3");
      if(N/n==5)
        my_printf("5");
      if(N/n==7)
        my_printf("7");
      if(N/n==15)
        my_printf("3 5");
      if(N/n==21)
        my_printf("3 7");
      if(N/n==35)
        my_printf("5 7");
      if(N/n==105)
        my_printf("3 5 7");
}
