#define NUM_ITER 1272594

#include <header.h>

int main_bench()
{
     int n,k=1,i;
     int a[6];
     my_scanf("%d",&n);
     while(n!=0)
     {
            a[k]=n%10;
            n=(n-a[k])/10;
            k=k+1;
     }
     for(i=1;i<=k-1;i++)
     {
                        my_printf("%d",a[i]);
     }
     
     
     
     return 0;
   
}
