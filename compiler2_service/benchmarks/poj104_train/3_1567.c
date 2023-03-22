#define NUM_ITER 6071

#include <header.h>



int main_bench()
{
    int n,k,a[1020],i=1,j=1,h=0;
    my_scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
      my_scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
      for(j=i+1;j<=n;j++)
        if(a[i]+a[j]==k)
          h=h+1;
       
  if(h>=1)
    my_printf("yes\n");
  else
     my_printf("no\n");
     getchar();
     getchar();
           
    return 0;
}
