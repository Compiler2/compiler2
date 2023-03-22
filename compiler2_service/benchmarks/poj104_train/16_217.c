#define NUM_ITER 1234696

#include <header.h>

int main_bench()
{
char a[5];
gets(a);
int i;
for(i=strlen(a);i>0;i--)
my_printf("%c",a[i-1]);
return 0;
}