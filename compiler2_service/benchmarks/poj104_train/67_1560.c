#include <header.h>

main_bench()
{
    int n,i;
    float a[100],b[100],c[100];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%f",&a[i]);
        my_scanf("%f",&b[i]);
        c[i]=b[i]/a[i];
    }
    for(i=1;i<n;i++)
    {
        if(c[i]-c[0]>0.05)
        my_printf("better");
        else if(c[i]-c[0]<-0.05)
        my_printf("worse");
        else
        my_printf("same");
        my_printf("\n");
    }
}