#include <header.h>

int main_bench()
{
int a,b,c,i,k,m,n;
char sz[300];
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%s",sz);
for(k=0;k<strlen(sz);k++)
{
switch(sz[k])
{
case 'A':
my_printf("T");
break;
case 'T':
my_printf("A");
break;
case 'C':
my_printf("G");
break;
case 'G':
my_printf("C");
break;
}
}
my_printf("\n");
}
return 0;
}