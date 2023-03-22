#include <header.h>

main_bench()
{

    float c[1000];
    int n,i,a,b;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {my_scanf("%d%d",&b,&a);c[i-1]=(float)a/b;}
    for(i=1;i<=n-1;i++)
    {if(c[i]-c[0]>0.05) my_printf("better\n");
    else if(c[0]-c[i]>0.05) my_printf("worse\n"); 
    else  my_printf("same\n");
    
    
    }


    return 0;
}
