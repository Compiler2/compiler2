#include <header.h>




int devide(int m,int n)
{   
    int full,empty,sum;
    if (n==2)
    return 1+m/2;
    else 
      {
    empty=devide(m,n-1);
    if (m<n)
    full=0;
    else
    full=devide(m-n,n);
    sum=full+empty;
    return sum;
      } 
}




main_bench()
{
      int N,M,n,c,t,k;
      my_scanf("%d",&n);
      for(t=1;t<=n;t++)
      {
      my_scanf("%d %d",&M,&N);
      if (N==1)
      my_printf("1");
      else
      my_printf("%d",devide(M,N)); 
      my_printf("\n"); 
      }
}