#define NUM_ITER 1434885

#include <header.h>

int main_bench()
{
    int n,a,m,p,q,k,l,s;
    my_scanf("%d",&n);
    if(n==10000) {a=1; my_printf("%05d",a);}
    else if(n>=1000)
    {s=n%1000;m=(n-s)/1000;l=s%100;p=(s-l)/100;q=l%10;
     k=(l-q)/10;a=q*1000+k*100+p*10+m;my_printf("%04d",a);}
    else if(n>=100)
    {s=n%100;m=(n-s)/100;l=s%10;p=(s-l)/10;
     a=l*100+p*10+m;my_printf("%03d",a);}
    else if(n>=10)
    {s=n%10;m=(n-s)/10;a=s*10+m;my_printf("%02d",a);}
    else my_printf("%d",n);
    return 0;
}