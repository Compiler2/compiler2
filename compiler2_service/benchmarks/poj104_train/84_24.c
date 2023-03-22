#include <header.h>

int main_bench()
{
    int n,i,a,b,c,m,t,r,k;
    my_scanf("%d\n",&n);
    my_scanf("%d\n%d\n",&a,&b);
    if(a<b)
      { t=a;a=b;b=t;}
    for(i=1;i<=n-2;i++)
     {
       my_scanf("%d\n",&c);
       if(c>=a)
        { r=a,a=c,c=r;
          k=c;c=b;b=k;}
      else if(c>=b)
        { t=b;b=c;c=t;}
     }
    my_printf("%d\n%d\n",a,b);
}
