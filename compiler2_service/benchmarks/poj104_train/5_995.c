#define NUM_ITER 904268

#include <header.h>

int main_bench()
{
double rate;
my_scanf("%lf",&rate);
char a[501],b[501];
my_scanf("%s%s",a,b);
int len1=strlen(a);
int len2=strlen(b);

if (len1!=len2)
{
my_printf("error\n");
return 0;
}

int i,sum=0; 
for (i=0; i<len1; i++)
{
switch (a[i])
{
case 'A': break;
case 'T': break;
case 'C': break;
case 'G': break;
default: my_printf("error\n");
         return 0;
}
switch (b[i])
{
case 'A': break;
case 'T': break;
case 'C': break;
case 'G': break;
default: my_printf("error\n");
         return 0;
}

if (a[i]==b[i]) sum++;
}

if ((double)sum/len1>rate) my_printf("yes\n"); else my_printf("no\n");
return 0;
}