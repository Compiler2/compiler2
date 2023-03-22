#include <header.h>

int p(int n)
{
for(int i=2;i*i<=n;i++)
   if (n%i==0) return 0;
   return 1;
    }
int main_bench()
{
    int a,p(int n);
    my_scanf("%d",&a);
    for (int i=3;2*i<=a;i++)
     if (p(i)*p(a-i)!=0) my_printf("%d %d\n",i,a-i);
    }
