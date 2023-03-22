#define NUM_ITER 36962

#include <header.h>

main_bench()
{
    int n,i,j,k,win=0,lose=0;
    int a[200]={0},b[200]={0};
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
        my_scanf("%d%d",&a[i],&b[i]);
    for(i=1;i<=n;i++)
    {
        if(a[i]==b[i]);
        else
        {
            if(a[i]==0)
            {
                if(b[i]==1) win++;
                else        lose++;
            }
            if(a[i]==1)
            {
                if(b[i]==0) lose++;
                else        win++;
            }
            if(a[i]==2)
            {
                if(b[i]==0) win++;
                else        lose++;
            }
        }
    }
    if(win==lose) my_printf("Tie\n");
    if(win>lose)  my_printf("A\n");
    if(win<lose)  my_printf("B\n");
    }