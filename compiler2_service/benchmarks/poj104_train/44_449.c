#define NUM_ITER 301803

#include <header.h>

int reverse(int num)
{
    int x=0,y=0,k=0;
    if(num==0)
    return 0;
    my_printf("\n");
    while(num>0)
    {
        x=num%10;
        y=y*10+x;
        num=num/10;
        if(num==0)
        break;
    }
    return y;
}
main_bench()
{
    int n[6],i;
    for(i=0;i<6;i++)
    {
        my_scanf("%d",&n[i]);
        if(n[i]>=0)
        {
            reverse(n[i]);
            my_printf("%d\n",reverse(n[i]));
        }
        else
        {
            reverse(-n[i]);
            my_printf("-%d\n",reverse(-n[i]));
        }
    }
}