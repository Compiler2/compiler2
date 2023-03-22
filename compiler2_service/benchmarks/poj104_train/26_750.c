#include <header.h>

int main_bench()
{
  char a[100];
  int i;
  gets(a);
  int m=strlen(a);
  for(i=0;i<m;i++)
  {
    if(a[i]==' '&&a[i+1]==' ')
    my_printf("");
    else  my_printf("%c",a[i]);

  }
  return 0;
}
