#define NUM_ITER 513

#include <header.h>

main_bench()
{
    int a[300]={0},b[300]={0};
    int i,j;
    int n=1,m=1;
    while ((n!=0)&&(m!=0))
    {
    my_scanf("%d %d",&n,&m);
    if ((n!=0)&&(m!=0)){
    for(i=0;i<=n-1;i++)
    {
       a[i]=i+1;

    }
    for(j=n;j>=1;j--)
    {
      for(i=0;i<=j-2;i++)
      {
        b[i]=a[(m%j+i)%j];

      }
      for(i=0;i<=n-2;i++)
      {
        a[i]=b[i];
      }


    }
    my_printf("%d\n",a[0]);
    }
    }
}