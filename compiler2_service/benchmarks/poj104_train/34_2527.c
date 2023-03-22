#define NUM_ITER 313231

#include <header.h>

int main_bench() 
{
int a; 
my_scanf ("%d",&a);
if(a!=1)
{
while (a!=1)
{
if (a%2==0)
{
my_printf ("%d/2=%d\n",a,a/2);
a=a/2;
}
else 
{
my_printf ("%d*3+1=%d\n",a,3*a+1);
a=3*a+1;
}
;
}
;
}
else;
my_printf ("End\n");
}
