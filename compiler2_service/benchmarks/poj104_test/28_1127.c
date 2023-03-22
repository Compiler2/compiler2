#define NUM_ITER 9824

#include <header.h>

int main_bench()
{
char a[300][50]={'0'};
char b;
int max=0,min=0,i;
for(i=0;;i++)
{
my_scanf("%s",a[i]);
my_scanf("%c",&b);
if(b==10)
break;
}
my_printf("%d", strlen(a[0]));
for(i=1;i<300;i++)
{
if(strlen(a[i])!=0)
my_printf(",%d", strlen(a[i]));
else break;
}
return 0;
}