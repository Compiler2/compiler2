#define NUM_ITER 1242509

#include <header.h>

int main_bench()
{
    int a[300]={0},n=0,i=0,j=0,m=0;
    char b;
    while(1)
    {
     my_scanf("%d%c",&a[n],&b);
     n++;
     
     if(b!=',')break;
     }
    
    
    for(i=0;i<n;i++){
    for(j=0;j<n-1;j++)
    {
     if(a[j]<a[j+1])
     {
      m=a[j];a[j]=a[j+1];a[j+1]=m;
      }
     }}
    m=0;
    for(i=1;i<n;i++)
    {
     if(a[i]!=a[0])
     {
      my_printf("%d\n",a[i]);
      m=1;
      break;
      }
     }
    if(m==0)my_printf("No\n");
}
     