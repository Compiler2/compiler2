#include <header.h>

int main_bench()
{
    int n,i;
    double jw,othr,othf,oths;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%lf%lf",&othr,&othf);
        if(i==0)jw=othf/othr;
        else {
               oths=othf/othr;
               if((oths-jw)<=0.05&&(jw-oths)<=0.05)
                  my_printf("same\n");
               else if(oths<jw)
                  my_printf("worse\n");
               else my_printf("better\n");
               }
               }
    return 0;
}