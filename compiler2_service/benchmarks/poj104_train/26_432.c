#define NUM_ITER 1537747

#include <header.h>

main_bench()
{
      char a[100];
      gets(a);
      for (int i=0;a[i]!='\0';i++)
      {
          if(a[i]==' ' && a[i-1]==' '); 
          else
          my_printf("%c",a[i]);
      }
}
