#define NUM_ITER 30285

#include <header.h>

int main_bench ()
{int n,i,j,l=0;
char a[40];
my_scanf ("%d",&n);
for (i=0;i<n;i++)
{my_scanf("%s",a);
j=strlen (a);
if(l==0)  {a[j]='\0';my_printf("%s",a);l=l+j+1;}
else
if (l+j<=80) {a[j]='\0';my_printf(" %s",a);l=l+j+1;}
else {my_printf("\n%s",a);l=j+1;}
}
return 0;
}
