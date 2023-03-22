#include <header.h>

int main_bench()
{
    char a[6];
    my_scanf("%s",&a);
    int n,i;
    for(i=0;i<=5;i++)
    {
     if(a[i]=='\0')
     {
      n=i;
      break;
      }
     }
    for(i=n-1;i>=0;i--)my_printf("%c",a[i]);
    my_printf("\n");
    return 0;
}