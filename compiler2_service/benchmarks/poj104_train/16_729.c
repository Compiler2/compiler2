#define NUM_ITER 956378

#include <header.h>




int main_bench()
{
    int num,temp=0,sub=0,dv=10;;
    my_scanf("%d",&num);
    int a,b=1;

    if (num==0)
    {
        my_printf("0");
        return 0;
    }

    while (num!=sub)
    {
        temp=(num-(num/dv)*dv-sub)/(dv/10);
        sub+=temp*(dv/10);

        my_printf("%d",temp);
        dv*=10;
    }

    return 0;
}

