#define NUM_ITER 55307

#include <header.h>

int main_bench(){
    int i,n,a[101];
    double b,c,d,e,sum1=0,sum2=0,sum3=0,sum4=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){my_scanf("%d",&a[i]);
                      if(a[i]<=18)sum1+=1;
                      else if(a[i]>=19&&a[i]<=35)sum2+=1;
                      else if(a[i]>=36&&a[i]<=60)sum3+=1;
                      else sum4+=1;}
    b=(100*sum1)/n;c=(100*sum2)/n;d=(100*sum3)/n;e=(100*sum4)/n;
    my_printf("1-18: %.2lf%%\n",b);
    my_printf("19-35: %.2lf%%\n",c);
    my_printf("36-60: %.2lf%%\n",d);
    my_printf("60??: %.2lf%%\n",e);
    return 0;
}