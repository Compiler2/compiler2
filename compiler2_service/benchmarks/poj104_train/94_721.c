#define NUM_ITER 18514

#include <header.h>



int main_bench()
{
    int N,i,j=0,k,sz[500],result[500],e;
    my_scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        my_scanf("%d",&sz[i]);
        if(sz[i]%2==1)
        {
            result[j]=sz[i];
            j++;
        }
    }
    for(k=1;k<=j;k++)
    {
        for(i=0;i<j-k;i++)
        {
            if(result[i]>result[i+1])
            {
                e=result[i+1];
                result[i+1]=result[i];
                result[i]=e;
            }
        }
    }
    for(i=0;i<j-1;i++) my_printf("%d,",result[i]);
    my_printf("%d",result[j-1]);
    return 0;
}