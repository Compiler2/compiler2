#include <header.h>


int main_bench()
{
  char a[50];
  int n,i,j,line,l;
  my_scanf("%d",&n);
  my_scanf("%s",a);
  my_printf("%s",a);
  line=strlen(a);
  for(i=2;i<=n;i++)
  {
      my_scanf("%s",a);
      line+=strlen(a)+1;
      if(line<=80)
      {
          my_printf(" %s",a);
      }
      else
      {
          my_printf("\n%s",a);
          line=strlen(a);
      }
  }

  return 0;
}