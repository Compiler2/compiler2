#include <header.h>

int main_bench()
{
    char a[80],b[80];
    int i=0;
    gets(a);
    gets(b);
    while (a[i]!='\0')
    {
          if (a[i]>='a'&&a[i]<='z') a[i]-=32;
          i++;
          }
    i=0;
    while (a[i]!='\0')
    {
          if (b[i]>='a'&&b[i]<='z') b[i]-=32;
          i++;
          }
    if (strcmp(a,b)<0) my_printf("<");
    if (strcmp(a,b)>0) my_printf(">");
    if (strcmp(a,b)==0) my_printf("=");
}
          
