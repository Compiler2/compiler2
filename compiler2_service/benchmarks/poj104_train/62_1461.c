#include <header.h>

int main_bench()
{
   char *str,*p;
   str=(char *)malloc(100*sizeof(char));
   gets(str);
   p=str;
   for (;*p!='\0';p++)
       {  if(*p!=' ') my_printf("%c",*p);
          else if(*(p-1)!=' ') my_printf(" ");
        }
}