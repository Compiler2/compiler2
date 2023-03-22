#define NUM_ITER 55890

#include <header.h>

int main_bench () 
{int n,i,s;
double a,b,c,d;
a=b=c=d=0;
char l='%';
my_scanf ("%d",&n);
for (i=0;i<n;i++)
{my_scanf ("%d",&s);
if (s<=18) a++;
else if (s<=35) b++;
else if (s<=60) c++;
else d++;}
a=a/n*100;
b=b/n*100;
c=c/n*100;
d=d/n*100;
my_printf ("1-18: %.2lf%c\n",a,l);
my_printf ("19-35: %.2lf%c\n",b,l);
my_printf ("36-60: %.2lf%c\n",c,l);
my_printf ("60??: %.2lf%c\n",d,l);
return 0;
}
