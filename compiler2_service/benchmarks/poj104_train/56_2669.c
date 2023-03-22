#include <header.h>

int fun(int a)
{static int b[5],i=0,c=0;
int j,k;
b[i]=a%10;
i++;
a=a/10;
if(a>0) fun(a);
else for(k=0;k<=i;k++)
{for(j=0;j<i-k-1;j++) 
b[k]=b[k]*10;
c=c+b[k];}
return (c);
 }
main_bench()
{int n,d;
my_scanf("%d",&n);
d=fun(n);
my_printf("%d",d);
return 0;
}