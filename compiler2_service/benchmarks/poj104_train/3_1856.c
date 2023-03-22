#include <header.h>

main_bench()
{
    int n,k,i,j;
    int t=0;
    my_scanf("%d %d",&n,&k);
    int *a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                t++;
                break;
            }
        }
        if(t!=0)
        break;
    }
    if(t==0)
    my_printf("no");
    else
    my_printf("yes");
}
