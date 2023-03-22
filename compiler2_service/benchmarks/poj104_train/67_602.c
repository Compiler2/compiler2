#include <header.h>

int main_bench()
{
    int n,i;
    float a[1000],b[1000],c[1000];
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        my_scanf("%f %f",&a[i],&b[i]);
    }
    c[1]=b[1]/a[1];
    for(i=2;i<=n;i++)
    {
                     c[i]=(b[i]/a[i]);
                     if(c[i]-c[1]>0.05)
                     {
                                     my_printf("better\n");
                     }
                     else if(c[1]-c[i]>0.05)
                     {
                          my_printf("worse\n");
                     }
                     else 
                     {
                          my_printf("same\n");
                     }
    }
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
}
    