#include <header.h>

int reverse(int n)
{
    int i,j,k=0;
    int a[1000];
    for(i=0;;i++)
    {
                 a[i]=n%10;
                 n=n/10;
                 if(n==0) break;
    }
    j=i;
    for(i=0;i<=j;i++)
    {
                 k=k*10+a[i];
    }
    return k;
}
main_bench()
{
      int i,n,k;
      for(i=0;i<6;i++)
      {
                      my_scanf("%d",&n);
                      k=reverse(n);
                      my_printf("%d\n",k);
      }
}
                      
                 
    
