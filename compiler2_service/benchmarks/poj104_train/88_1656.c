#include <header.h>

int main_bench()
{
char c[50];
int i=0,flag=0;
gets(c);
while (i<=strlen(c))
{
if (c[i]>='0'&&c[i]<='9') 
	if (flag==0) {flag=1;my_printf("\n%c",c[i]);} else my_printf("%c",c[i]);
else flag=0;
i++;
}
}