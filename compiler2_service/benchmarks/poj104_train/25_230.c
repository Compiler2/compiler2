#define NUM_ITER 261718

#include <header.h>


int main_bench()
{
    int m,n,i;
    double s=1;
    my_scanf("%d",&n);
    if(n==0){my_printf("1");}
    else
    {
        for(i=1;i<=n;i++)
        {
          s*=2;
        }
        my_printf("%.0f",s);
    }
    
    return 0;
}
