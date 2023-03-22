#define NUM_ITER 387565

#include <header.h>

int num,s;
int reverse(int num)
{
    s=0;
    while(num!=0)
    {
    s=s*10+num-((int)(num/10))*10;
    num=num/10;
    }
    return s;
}

main_bench()
{
    int x;
    for(int i=1;i<=6;i++)
    {
    my_scanf("%d",&x);
    if(x>=0)
    my_printf("%d\n",reverse(x));
    if(x<0)
    {x=(-1)*x;my_printf("%d\n",(-1)*reverse(x));}
    }
getchar();getchar();getchar();getchar();getchar();getchar();
}
