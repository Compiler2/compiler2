#define NUM_ITER 46692

#include <header.h>

int main_bench()
{
      int a[1000000];
      int i,n,del,j;
      my_scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
       my_scanf("%d",&a[i]);
       }
       my_scanf("%d",&del);
       for(i=1;i<=n;i++)
      {
                           if(a[i]==del) 
                           {
                             for(j=i;j<=n;j++)   
                             a[j]=a[j+1];
                             i--;
                             n--;}
       }
      for(i=1;i<n;i++)
      my_printf("%d ",a[i]);
      my_printf("%d",a[n]);
}
