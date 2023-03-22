#include <header.h>

int main_bench()
{
   int i,j,n,k;
   my_scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
     my_scanf("%d",&a[i]);
     }
   my_scanf("%d",&k);
   for(i=0;i<n;i++)
   {
     if(a[i]==k)
     {
       for(j=i;j<n-1;j++)
       {
         a[j]=a[j+1];
         }
       n--;
       i--;
       }
     }
     for(i=0;i<n-1;i++)
       my_printf("%d ",a[i]);
       my_printf("%d\n",a[n-1]);
   getchar();
   getchar();
   getchar();
   return 0;
}