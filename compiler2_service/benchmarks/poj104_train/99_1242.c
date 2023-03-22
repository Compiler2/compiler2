#define NUM_ITER 56654

#include <header.h>

int main_bench()
{
    int i,n,a=0,b=0,c=0,d=0;
    double e,f,g,h;
    int sz[10000];
    int num[10000];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
        if(sz[i]<19){
            a++;
            }else if(sz[i]<36){
            b++;
            }else if(sz[i]<61){
            c++;
            }else{
            d++;
        }
    }
    e=1.0*a/n*100;
    f=1.0*b/n*100;
    g=1.0*c/n*100;
    h=1.0*d/n*100;
    my_printf("1-18: ");
    my_printf("%.2lf",e);
    my_printf("%%\n");
    my_printf("19-35: ");
    my_printf("%.2lf",f);
    my_printf("%%\n");
    my_printf("36-60: ");
    my_printf("%.2lf",g);
    my_printf("%%\n");
    my_printf("Over60: ");
    my_printf("%.2lf",h);
    my_printf("%%\n");
    return 0;
}

