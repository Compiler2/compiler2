#define NUM_ITER 1304897

#include <header.h>

main_bench()
{
      int i,n,l;
      char a[100],b[100];
      gets(a);
      l=strlen(a);
      for(i=0;i<l;i++)
      {
                     if(a[i]!=' ')
                       my_printf("%c",a[i]);
                      if(a[i]==' ')
                      {
                                 if(a[i-1]==' ')
                                 continue;
                                 else
                                my_printf(" ");
                      }
      }
      getchar();
}