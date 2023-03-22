#include <header.h>

main_bench()
{     
      int a[300],n,i;
      int *p;
      p=a;
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
      my_scanf("%d",p+i);
      for(i=0;i<n;i++)
      *(p+n+99-i)=*(p+i);
      for(i=100;i<100+n-1;i++)
      my_printf("%d ",*(p+i));
      my_printf("%d",*(p+100+n-1));
}