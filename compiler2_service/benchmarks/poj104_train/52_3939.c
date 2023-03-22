#define NUM_ITER 3066

#include <header.h>

main_bench()
{
    int a[100],m,n,b[100],i,j=0;
    my_scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
        my_scanf("%d",&a[i]);
    for(i=m-n;i<m;i++)
    {
        b[j]=a[i];
        j++;
    }
    for(j=0;j<n;j++)
    for(i=m-1;i>=0;i--)
    {
       a[i+1]=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    for(i=0;i<m;i++)
    {
      if(i==0)
      my_printf("%d",a[i]);
      else
      my_printf(" %d", a[i]);
    }
    getchar();
    getchar();
} 