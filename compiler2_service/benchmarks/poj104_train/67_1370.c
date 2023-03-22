#define NUM_ITER 28011

#include <header.h>

int main_bench()
{
    int a[100],b[100],n,i,j,k;
    double c[100];
    my_scanf("%d",&n);
    my_scanf("%d%d",&a[0],&b[0]);
    c[0]=(double)b[0]/a[0];
    for(i=1;i<n;i++){
        my_scanf("%d%d",&a[i],&b[i]);
        c[i]=(double)b[i]/a[i];
        if(c[i]-c[0]>0.05)
            my_printf("better\n");
        else if(c[0]-c[i]>0.05)
            my_printf("worse\n");
        else
            my_printf("same\n");
                      }
    return 0;
}