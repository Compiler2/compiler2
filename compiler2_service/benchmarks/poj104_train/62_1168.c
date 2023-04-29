#define NUM_ITER 1323833

#include <header.h>

int main_bench()
{

char str[100];
int i;
gets(str);
for(i=0;i<strlen(str);i++)
if(str[i]!=' ')
my_printf("%c",str[i]);
else if(str[i]==' ')
{if(str[i-1]!=' ')
my_printf("%c",str[i]);
}

return 0;
}