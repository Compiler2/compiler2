#define NUM_ITER 3671

#include <header.h>

int main_bench()
{
    int n,i,j,k,g,b;
    my_scanf("%d",&n);
    if(n<5)
    my_printf("empty");
    for(i=2;i<=n-2;i++)
    {
        for(g=0,j=1;j<i;j++)
        {
            if((i%j)==0)
            g=g+1;
        }
        if(g==1)
        {
            for(b=0,j=1,k=i+2;j<k;j++)
            {
                if((k%j)==0)
                b=b+1;
            }
            if(b==1)
            {
                my_printf("%d %d\n",i,k);
            }
            else
            {
                continue;
            }
        }
        else
        {
            continue;
        }
    }
}