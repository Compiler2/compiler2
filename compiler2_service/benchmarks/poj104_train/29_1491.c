#define NUM_ITER 4273

#include <header.h>

main_bench()
{
    int m,n;
    my_scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        my_scanf("%d",&n);
        float sum=0;
        float x,y,t;
        x=2;
        y=1;
        for(int j=1;j<=n;j++)
        {
            if(j==1)
            sum=2;
            else
            {
                sum=(x+y)/x+sum;
                t=x;
                x=x+y;
                y=t;
            }
        }
        my_printf("%.3f\n",sum);
        sum=0;
    }
}
