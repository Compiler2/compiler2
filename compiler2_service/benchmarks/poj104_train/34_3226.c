#define NUM_ITER 394162

#include <header.h>

int main_bench()

    {
        int m,n;
        int i;
        my_scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            if (m==1)break;
        while (m>1)
            {
       if (m%2==1)n=m,m=m*3+1,my_printf("%d*3+1=%d\n",n,m);
        else n=m,m=m/2,my_printf("%d/2=%d\n",n,m);
               
            }
        }
            my_printf("End");
    }
