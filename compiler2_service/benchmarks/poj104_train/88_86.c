#define NUM_ITER 1540314

#include <header.h>

main_bench()
{
      char a[30];
      gets(a);
      for(int i=0;a[i]!='\0';i++)
      {
              if(a[i]<='9'&&a[i]>='0'&&a[i+1]<='9'&&a[i+1]>='0')
                my_printf("%c",a[i]);
              else if(a[i]<='9'&&a[i]>='0'&&(a[i+1]<='9'&&a[i+1]>='0')==0)
                my_printf("%c\n",a[i]);
      }
}
