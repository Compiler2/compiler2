#define NUM_ITER 1304254

#include <header.h>

main_bench()
{
int i;
char str[100];
my_scanf("%s",&str);
for(i=strlen(str)-1;i>=0;i--)
my_printf("%c",str[i]);
getchar();
getchar();
}