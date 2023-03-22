#include <header.h>

int main_bench()
{
char a[30];
int i,ok;
gets(a);
for (i=0;i<strlen(a);i++)
if (!(*(a+i)>='0'&&*(a+i)<='9'))
{
	ok=1;
	continue;
}
else 
{
if (ok) my_printf("\n");
ok=0;
my_printf("%c",*(a+i));
}
return 0;
}