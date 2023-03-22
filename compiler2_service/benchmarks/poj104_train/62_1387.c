#include <header.h>

int main_bench()
{char s[999],*p;
int i,j;
gets(s);
p=s;
for(;*p!='\0';p++)
if(*p!=' ')
my_printf("%c",*p);
else
if(*p==' '&&*(p+1)!=' ')
my_printf("%c",*p);
}