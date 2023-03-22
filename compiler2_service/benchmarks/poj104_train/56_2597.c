#include <header.h>

int main_bench()
{
int i;
char a[]={'\0','\0','\0','\0','\0','\0'};
my_scanf("%s",a);
for(i=0;i<6;i++)
if(a[5-i])
my_printf("%c",a[5-i]);
return 0;
}