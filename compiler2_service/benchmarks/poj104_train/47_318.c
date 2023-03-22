#define NUM_ITER 55374

#include <header.h>



int main_bench()
{
 int a[100],b[100],n,i,j,f=0;
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     my_scanf("%d",&a[i]);
     b[n-i-1]=a[i];
 }
 for(i=0;i<n;i++)
 {
     if(f==0)
     {
         my_printf("%d",b[i]);
         f=1;
     }
     else
     {
         my_printf(" %d",b[i]);
     }
 }
 my_printf("\n");
 return 0;
}
