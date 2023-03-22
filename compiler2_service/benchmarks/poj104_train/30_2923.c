#include <header.h>


int main_bench()
{
int n,i,s=0,a;
my_scanf("%d",&n);
for(i=1;i<=n;i++)
 {if(i%7!=0)
     if(i%10!=7)
         if(i/10%10!=7) s=s+i*i;
 }
my_printf("%d",s);
}

