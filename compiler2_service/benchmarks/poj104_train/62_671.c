#define NUM_ITER 1442516

#include <header.h>

int main_bench()
{char a[1000],b[1000];
int n,i=0,t;
n=0;
gets(a);
while (a[i]!='\0')
{if (a[i]!=32 && t!=0) t=0;
if (a[i]==32 && t!=0) t++;
else 
{b[n]=a[i];
n++;
if (a[i]==32) t++;
}
i++; 
}
b[n]='\0';
my_printf ("%s\n",b);
return 0;
}