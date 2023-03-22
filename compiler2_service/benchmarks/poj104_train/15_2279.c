#include <header.h>

main_bench()
{   
    int n,i,a,x,y;
    my_scanf("%d",&n);
    for(i=1;i<=n*n;i++)    {my_scanf("%d",&a);if(a==0) {x=i;break;}
    }
    for(i=x+1;i<=n*n;i++)
    {my_scanf("%d",&a);if(a==0) y=i;}
    my_printf("%d",(y/n-x/n-1)*(y%n-x%n-1));
    
    return 0;
}

