#include <header.h>

int main_bench()  {
     int i,j,n,k,t;
    my_scanf("%d",&n);
    int a[n];
   for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
  for(i=0;i<n;i++)
   { k=i;
     for(j=i+1;j<n;j++)
       if(a[k]<a[j])   
{  t=a[k];a[k]=a[j];a[j]=t;}
    }
  my_printf("%d\n%d",a[0],a[1]);  
        return 0;}