#define NUM_ITER 36041

#include <header.h>

int main_bench()
{
    int n,i,j=0,h=0;
    int sz[100][2];
    int sfzc[100]={0};
    int lxsc[100]={0};
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d%d",&sz[i][0],&sz[i][1]);
    }
    for(i=0;i<n;i++)
    {
        if((90<=sz[i][0])&&(sz[i][0]<=140))
        {
            if((60<=sz[i][1])&&(sz[i][1]<=90))
            {
                sfzc[i]=1;
            }
        }
    }
    for(i=0;i<n+1;i++)
    {                               
        if(sfzc[i]==1)
        {
            j++;
        }
        else
        {
            lxsc[i]=j;
            j=0;
        }
    }
    for(i=0;i<n+1;i++)
    {
        if(h<lxsc[i])
        {
            h=lxsc[i];
        }
    }
    my_printf("%d",h);
    return 0;
}
