#include <header.h>

int main_bench()
{
    int n,k;
    int a[1005];
    my_scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++)
        my_scanf("%d",&a[i]);
    int f=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            if(a[i]+a[j]==k)
            {
                f=1;
                break;
            }
            
        }
    if(f==1)
		my_printf("yes\n");
    else
		my_printf("no\n");
    return 0;
}