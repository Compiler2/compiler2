#define NUM_ITER 15485

#include <header.h>

int main_bench()
{
    int n,i,j,k;
    my_scanf("%d",&n);
    if(n<=4)
    my_printf("empty");
    else
    {
        for(i=3;i<=n-2;i++)
        {
            for(j=2;j<=i-1;j++)
                if(i%j==0)break;
            if(j>i-1)
            {
                for(k=2;k<=i+1;k++)
                    if((i+2)%k==0)break;
                if(k>i+1)
                    my_printf("%d %d\n",i,i+2);
                else;
            }
            else;
        }
    }
    getchar();
    getchar(); 
}