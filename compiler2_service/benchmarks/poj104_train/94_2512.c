#include <header.h>

int main_bench()
{
    int j,n,e,shuru[501],shuchu[501];
    j=0;
    my_scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
        my_scanf("%d",&shuru[i]);
        if(shuru[i]%2==1)
        {
             shuchu[j]=shuru[i];
             j=j+1;
        }
       
    }
    for(int k=1;k<j;k++)
    {
        for(int m=0;m<j-k;m++)
        {
            if(shuchu[m]<shuchu[m+1])
            {
               e=shuchu[m+1];
               shuchu[m+1]=shuchu[m];
               shuchu[m]=e;
            }
        }
        my_printf("%d,",shuchu[j-k]);
    }
    
    
     for(int m=0;m<j-j;m++)
        {
            if(shuchu[m]<shuchu[m+1])
            {
               e=shuchu[m+1];
               shuchu[m+1]=shuchu[m];
               shuchu[m]=e;
            }
        }
        my_printf("%d",shuchu[j-j]);
    return 0;
}
