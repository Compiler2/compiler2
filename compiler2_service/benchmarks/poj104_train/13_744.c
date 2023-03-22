#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int a[100];
    int i=0;
    int x;
    my_scanf("%d",&x);
    my_printf("%d",x);
    a[i]=x;
    i++;
    for(int j=1;j<n;j++)
    {
            int h;
            int k=0;
            my_scanf("%d",&h);
            for(int t=0;t<i;t++)
            {
                    if(h==a[t])
                    k=1;
            }
            if(k==0)
            {
                   my_printf(" %d",h);
                   a[i]=h;
                   i++;
            }
    }
    getchar();
    getchar();
}
