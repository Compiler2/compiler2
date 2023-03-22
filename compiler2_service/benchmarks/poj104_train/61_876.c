#include <header.h>

int main_bench()
{
   int i,j,n;
   
   int a[30]={1},b[20];
  
    a[1]=a[0];
   for(i=2;i<30;i++)    
    a[i]=a[i-2]+a[i-1];
   my_scanf ("%d",&n);
   for(j=0;j<n;j++)
      my_scanf("%d",&b[j]);
     for(j=0;j<n;j++)
    my_printf("%d\n",a[b[j]-1]);       
   getchar(); getchar(); getchar();
}
