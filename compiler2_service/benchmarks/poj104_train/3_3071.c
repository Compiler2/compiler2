#define NUM_ITER 59459

#include <header.h>

int main_bench()
{
    int n=0,k=0,i=0,j=0;
    int a[1002]={0};
    int ans=0;
    my_scanf("%d%d\n",&n,&k);
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                ans=1;
                break;
            }
        }
        if(ans==1)
            break;
    }
    if(ans==1)  
		my_printf("yes\n");
    else 
		my_printf("no\n");
    return 0;
}