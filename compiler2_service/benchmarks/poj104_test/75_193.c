#define NUM_ITER 2494

#include <header.h>

int main_bench()
{
    int x[1000],y[1000],i,n,t,count1,count=0;
    for(i=0;;i++)
    {
        my_scanf("%d",&x[i]);
        if(getchar()=='\n')
        {
            n=i+1;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&y[i]);
        if(i<n-1)
            my_scanf(",");    
    }
    for(i=0;i<n;i++)
       
    for(t=0;t<1000;t++)
    {
        count1=0;
        for(i=0;i<n;i++)
            if((x[i]<=t)&&(y[i]>t))
            {
                count1++;
               
            }
        if(count1>count)
            count=count1;
       
    }
    my_printf("%d %d",n,count);
    return 0;
}