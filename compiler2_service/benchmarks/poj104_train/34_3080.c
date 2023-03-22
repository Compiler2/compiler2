#define NUM_ITER 332092

#include <header.h>

int main_bench()
{
    int n,i,a,b;
    my_scanf("%d",&n);
    if(n==1)
    {
        my_printf("End");
    }
    else
    {
        do
        {
            i=n%2;
            if(i==1)
            {
                a=n*3+1;
                my_printf("%d*3+1=%d\n",n,a);
                n=a;
            }
            else
            {
                b=n/2;
                my_printf("%d/2=%d\n",n,b);
                n=b;
            }
        }
        while(n!=1);
        my_printf("End");
    }
    return 0;
}
