#define NUM_ITER 54256

#include <header.h>

int main_bench()
{
    int n,a[101],i,b=0,c=0,d=0,e=0;
    double f,g,h,k;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
       if(a[i]<=18)
       b=b+1;
       else if(a[i]>=19&&a[i]<=35)
       c=c+1;
       else if(a[i]>=36&&a[i]<=60)
       d=d+1;
       else e=e+1;
    }
    f=(double)b/n*100;
    g=(double)c/n*100;
    h=(double)d/n*100;
    k=(double)e/n*100;
    my_printf("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\n60??: %.2lf%",f,g,h,k);
}