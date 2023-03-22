#define NUM_ITER 9664

#include <header.h>

int main_bench()
{
    int a[20000],n,i,num,j,flag,k,h=0;
    my_scanf("%d%d",&n,&a[0]);
    for(i=1;i<=n-1;i++)
    {my_scanf("%d",&num);
        for(j=0;j<=i-1;j++)
        {if(num!=a[j])
            flag=1;
         else
         {flag=0;break;}}
     if(flag==1)
     {h++;
         a[h]=num;}
    }
    for(k=0;k<=h-1;k++)
        my_printf("%d ",a[k]);
    my_printf("%d",a[h]);
    return 0;
}