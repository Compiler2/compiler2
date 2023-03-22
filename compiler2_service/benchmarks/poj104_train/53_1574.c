#include <header.h>

main_bench()
{
    int n,i,j,k,s;
    int a[300];
    my_scanf("%d",&n);
    my_scanf("%d",&a[0]);
    for(i=1;(getchar())!='\n';i++)
    {
        my_scanf(" %d",&s);
        a[i]=s;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                i--;
                break;
            }
        }
    }
    my_printf("%d",a[0]);
    for(j=1;j<i;j++)
    my_printf(",%d",a[j]);
    return 0;
}
