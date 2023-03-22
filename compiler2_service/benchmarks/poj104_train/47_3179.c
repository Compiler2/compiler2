#define NUM_ITER 51350

#include <header.h>

int main_bench()
{
    int a[100],n,i,j,m,temp;
    int *p,*q;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {my_scanf("%d",&a[i]);}

    for(j=0;j<n/2;j++)
  { p=&a[j];
  q=&a[n-1-j];
   temp=*p;
   *p=*q;
   *q=temp;
 
}

    for(m=0;m<n-1;m++)
   { my_printf("%d ",a[m]);} 
 my_printf("%d",a[n-1]);
    return 0;}