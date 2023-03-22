#include <header.h>

int main_bench()
{
 int l,i;
 char a[100];
 char *p;
 p=a;
 gets(a);
 l=strlen(p);
 for(i=0;i<l-1;i++)
 {
   my_printf("%c",*(p+i)+*(p+i+1));
  }
 my_printf("%c",*p+*(p+l-1));
}