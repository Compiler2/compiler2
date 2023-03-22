#define NUM_ITER 93315

#include <header.h>

main_bench()
{
      char a[100000]={0};
      gets(a);
      for(int i=0;;i++)
      {
              if (a[i]==0) break;
              else
              {
              if(a[i]!=' ') my_printf("%c",a[i]);
              if(a[i]==' ' && a[i+1]!=' ') my_printf("%c",a[i]);
              }
      }
}