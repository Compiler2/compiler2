#define NUM_ITER 115662

#include <header.h>

int main_bench()
{
    int n,i,j,k,sum=0,a,b;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {      
           a=i/10;
           b=i-a*10;
           if((a!=7)&&(b!=7)&&(i%7!=0))
           sum=sum+i*i;
    }
    my_printf("%d",sum);
    my_scanf("%d",&n);
    return 0;
}       