#include <header.h>

int main_bench()
{
char *a;
a=(char*)malloc(10000*sizeof(char));
int i;
gets(a);
for(i=0;*(a+i)!='\0';i++)
{
if(*(a+i)>=48&&*(a+i)<=57)
my_printf("%c",*(a+i));
else my_printf("\n");
}
}