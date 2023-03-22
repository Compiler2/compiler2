#include <header.h>

int main_bench()
{
int n1,n2,mianji,temp=0,a=0,b=0,n,c;
my_scanf("%d",&n);
for(n1=1;n1<=n;n1++)
{
 for(n2=1;n2<=n;n2++)
   {
     my_scanf("%d",&c);
     if(c==0)
     b++;
    }
 if(b!=temp)
    {
     a++;
     temp=b;
    }
}
mianji=(a-2)*(b/2-a);
my_printf("%d",mianji);
}