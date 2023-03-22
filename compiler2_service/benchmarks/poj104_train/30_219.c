#include <header.h>

int main_bench()
{
int a[100]={0},j=0;
int n,i,s=0;
my_scanf("%d",&n);
for(i=1;i<=n;i++)
{ if(i%7!=0)
    if(i%10!=7&&i/10!=7) 
       s=s+i*i;
}
my_printf("%d",s);
}
  