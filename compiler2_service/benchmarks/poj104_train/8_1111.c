#include <header.h>

main_bench()
{
      int c,d,e,f,g;
      my_scanf("%d%d",&c,&d);
      int a[c],b[d];
      for(e=0;e<c;e++)
      my_scanf("%d",&a[e]);
      for(e=0;e<d;e++)
      my_scanf("%d",&b[e]);
      for(f=0;f<c-1;f++)
      for(e=0;e<c-1;e++)
      if(a[e]>a[e+1])
      {
                     g=a[e];
                     a[e]=a[e+1];
                     a[e+1]=g;
                     }
      my_printf("%d",a[0]);
      for(e=1;e<c;e++)
      my_printf(" %d",a[e]);
      for(f=0;f<d-1;f++)
      for(e=0;e<d-1;e++)
      if(b[e]>b[e+1])
      {
                     g=b[e];
                     b[e]=b[e+1];
                     b[e+1]=g;
                     }
      for(e=0;e<d;e++)
      my_printf(" %d",b[e]);
      }