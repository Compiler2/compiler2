#include <header.h>

main_bench()
{
    int a[20000],n=0,i=0,j=0,c=0;
    
    for (i=0;i<20000;i++) a[i]=0;

    my_scanf("%d\n",&n);
    my_scanf("%d",&a[0]);
    for (i=1;i<n;i++)
       my_scanf(" %d",&a[i]);
       
    my_printf("%d",a[0]);

    for (i=1;i<n;i++)
    {
        c=0;
        for (j=0;j<i;j++)
        if (a[j]==a[i])  c=1;
        if (c==0) my_printf(" %d",a[i]);
    }  
}
