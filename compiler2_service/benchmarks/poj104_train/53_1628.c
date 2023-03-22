#include <header.h>

int main_bench()
{
    int a[20000],i=1,j,f,b,n;
    my_scanf("%d",&n);
    my_scanf("%d",&f);
    a[0]=f;
    for( ;i<n;i++)
    {
         my_scanf("%d",&b);
         a[i]=b;
    }
    my_printf("%d",f);
    for(i=0;i<n;i++)
    {
                    for(j=i+1;j<n;j++)
                    {
                                      if(a[i]==a[j])
                                      a[j]=-1;
                    }
    }
    for(i=1;i<n;i++)
    {
                    if(a[i]>0)
                    my_printf(",%d",a[i]);
    }

    return 0;
}