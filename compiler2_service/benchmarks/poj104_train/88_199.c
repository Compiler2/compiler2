#include <header.h>

int main_bench()
{
 char a[40];
 int i=0;
 gets(a);
 my_printf("\n");
 while(*(a+i)!='\0')
  {
    if(*(a+i)>='0'&&*(a+i)<='9') my_printf("%c",*(a+i));
    else if(*(a+i+1)>='0'&&*(a+i+1)<='9') my_printf("\n");
    i++;
   }
}