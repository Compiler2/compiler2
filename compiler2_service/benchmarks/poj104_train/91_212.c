#include <header.h>

int main_bench()
{
   char *p,*a,*b;
   p=(char *)malloc(200*sizeof(char));
   gets(p);
   for(a=p,b=p+1;b<p+strlen(p);a++,b++)
	   my_printf("%c",*a+*b);
   my_printf("%c",*p+*a);
}