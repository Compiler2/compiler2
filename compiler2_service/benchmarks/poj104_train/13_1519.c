#include <header.h>


int main_bench()
{
    int a[20000];
    int check[100]={0};
    int n,i;
    
    my_scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    
    for (i=0; i<n; i++)
    {
        if (check[a[i]]==0)
        {
            if (i==0) {
                my_printf("%d",a[i]);
            }
            else
            {
                my_printf(" %d",a[i]);
            }
            check[a[i]]=1;
        }
    }
    return 0;
}