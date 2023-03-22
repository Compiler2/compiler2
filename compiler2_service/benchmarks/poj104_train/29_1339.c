#include <header.h>

int main_bench()
{
int m;
for (my_scanf("%d",&m);m--;)
{
int n;
my_scanf("%d",&n);
double tot=0;
double a,b;
a=1;b=2;
while (n--)
{
tot+=b/a;
int c=a+b;a=b;b=c;
}
my_printf("%.3f\n",tot);
}
return 0;
}