#define NUM_ITER 35166

#include <header.h>

int main_bench()
{
int n,s[100],z[100],i,j=0,a=0;
my_scanf ("%d", &n);
for (i=0;i<=n-1;++i)
{
my_scanf ("%d %d", &s[i],&z[i]);
}
for (i=0;i<=n-1;++i)
{
if (90<=s[i]&&s[i]<=140&&60<=z[i]&&z[i]<=90)
{
j=j+1;
}
else
{
if (a<=j)
{
a=j;
}
j=0;
}
}
if (a<=j)
{
	a=j;
}
my_printf ("%d", a);
return 0;
}