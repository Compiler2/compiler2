#include <header.h>


main_bench()
{
    int a[101];
    int n,m,i, p;
    
    my_scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++)
    {
                     my_scanf("%d", &a[i]);
    }
    
    a[0] = a[n];
    for(i = 1;i <= n; i++)
    {
     p = (n - m + i) % n;
     my_printf("%d", a[p]);
     
     if(i != n) my_printf(" ");
}
}
