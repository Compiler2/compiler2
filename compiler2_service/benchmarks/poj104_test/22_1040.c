#define NUM_ITER 1577909

#include <header.h>

int main_bench()
{
char c;
int a[300],max=0,d=-1,i=0,b;
for(i=0;;i++)
{
my_scanf("%d%c",&a[i],&c);
if(c!=',') break;
}
b=i;i=1;
max=a[0];
for(i=1;i<=b;i++)
if(a[i]>max) {d=max;max=a[i];}
else if(a[i]<max&&a[i]>d)d=a[i];
if(d==-1) my_printf("No");
else my_printf("%d",d);
return 0;
}